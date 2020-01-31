/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_inflix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 11:58:29 by hnguyen2          #+#    #+#             */
/*   Updated: 2020/01/26 12:03:56 by hnguyen2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_inflix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_inflix(root -> left, applyf);
		applyf(root -> item);
		btree_apply_inflix(root -> right, applyf);
	}
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		applyf(root->item);
		btree_apply_prefix(root -> left, applyf);
		btree_apply_prefix(root -> right, applyf);
	}
}

void 	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_suffix(root -> left, applyf);
		btree_apply_suffix(root -> right, applyf);
		applyf(root-> item);
	}
}

