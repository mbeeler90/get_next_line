/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:13:29 by mbeeler           #+#    #+#             */
/*   Updated: 2021/12/07 13:52:14 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len > dstsize)
		len = dstsize;
	if (dstsize > len + 1)
		ft_strncat(dst, src, (dstsize - len - 1));
	return (len + ft_strlen(src));
}
