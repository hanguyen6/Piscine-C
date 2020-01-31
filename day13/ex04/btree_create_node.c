/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 11:26:32 by hnguyen2          #+#    #+#             */
/*   Updated: 2020/01/26 11:32:47 by hnguyen2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*ptr;
	
	ptr = (t_btree*)malloc(sizeof(t_btree));
	ptr->left = 0;
	ptr->right = 0;
	ptr->item = item;

	return(ptr);
}


