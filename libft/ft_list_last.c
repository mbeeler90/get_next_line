/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:28:51 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:49:12 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}
