/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:11:54 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:48:12 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_btree	*btree_create_node(void *item)
{
	t_btree		*tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->item = item;
		tmp->left = NULL;
		tmp->right = NULL;
	}
	return (tmp);
}
