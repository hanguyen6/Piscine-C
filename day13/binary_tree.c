/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 22:28:21 by hnguyen2          #+#    #+#             */
/*   Updated: 2020/01/26 11:24:14 by hnguyen2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enums	e_rb_color
{
		RB_BLACK,
		RB_RED
};

typedef struct		s_btree
{
	struct s_btree		*parent;
	struct s_btree		*right;
	struct s_btree		*left;
	void				*data;
}					t_btree;

