/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_filemanipulation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 18:24:30 by hnguyen2          #+#    #+#             */
/*   Updated: 2020/01/23 19:31:50 by hnguyen2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"
#define BUF_SIZE 10 

void 	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str)); 
}

int main()
{
	int fd;
	int ret; 
	char buf[BUF_SIZE + 1];

//	fd = open("test_fileman.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR |  S_IRGRP | S_IWGRP);
	fd = open("ft.h", O_RDONLY);

	if (fd == -1)
	{
		ft_putstr("open () error !");
		return(1);
	}

	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
//	   	ft_putnbr(ret);
		ft_putstr(buf);
	}
//	ft_putnbr(fd);
//	ft_putstr_fd(fd, "Hello world");

	if(close(fd) == -1)
	{
		return(1);
	}
	return(0);
}
