/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:23:48 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:48:31 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = data;
		tmp->next = NULL;
	}
	return (tmp);
}
