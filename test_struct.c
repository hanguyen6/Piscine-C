/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_enums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:15:52 by hnguyen2          #+#    #+#             */
/*   Updated: 2020/01/21 20:02:45 by hnguyen2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define EVEN(x) x % 2
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0
#define ABS(x) ((x >= 0)? x : -x)
#include <unistd.h>

typedef enum e_bool
{
	FALSE,
	TRUE
} 			t_bool;

typedef struct s_point
{
	int x;
	int y; 
} 				t_point;

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return((EVEN(nbr)) ? TRUE: FALSE);
}

int main(int argc, char **argv)
{
	t_bool ta; 
	t_point a; 
	t_point b; 
	t_point *ptr;
	int x; 

	x = ABS(-10);
	a.x = 10;
	a.y = 14;
	b = a;
	ptr = &a; 
	ptr -> x = 14; 
	
	if (ft_is_even(argc -1) == TRUE)
	{
		ft_putstr(EVEN_MSG);
	}
	else
	{
		ft_putstr(ODD_MSG);
	}

	return (x);
}
