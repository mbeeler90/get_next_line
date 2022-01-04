/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:09:13 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:47:53 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	btree_apply_infix(t_btree *root, void (*applyf) (void *))
{
	if (root)
	{
		btree_apply_infix(root->left, applyf);
		applyf(root->item);
		btree_apply_infix(root->right, applyf);
	}
}
