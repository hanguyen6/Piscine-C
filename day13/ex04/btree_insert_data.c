/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:09:58 by hnguyen2          #+#    #+#             */
/*   Updated: 2020/01/26 12:17:35 by hnguyen2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!*root)
	{
		*root = btree_create_node(item);
	} 
	else if (cmpf((*root)-> item, item) <= 0) 
	{
		if (! (*root) -> right)
		{
			(*root) -> right = btree_create_node(item);
		}
		else 
		{
			btree_insert_data(&((*root)->right), item, cmpf);
		}
	}
	else
	{
		if(! (*root)-> left)
		{
			(*root)->left = btree_create_node(item);
		}
		else
		{
			btree_insert_data(&((*root)->left), item, cmpf);
		}
	}
}
