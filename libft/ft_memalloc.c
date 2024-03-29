/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:47:23 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:50:11 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	ret = malloc(sizeof(void) * size);
	if (!ret)
		return (NULL);
	else
		return (ft_memset(ret, 0, size));
}
