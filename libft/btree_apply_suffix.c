/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:11:02 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:48:10 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	btree_apply_suffix(t_btree *root, void (*applyf) (void *))
{
	if (root)
	{
		btree_apply_suffix(root->left, applyf);
		btree_apply_suffix(root->right, applyf);
		applyf(root->item);
	}
}
