/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:06:41 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:53:16 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (NULL);
	ret = ft_strnew(len);
	if (ret)
	{
		ft_strncpy(ret, s + start, len);
		ret[len] = '\0';
	}
	return (ret);
}
