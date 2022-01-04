/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:12:49 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/12/07 13:53:01 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (j < len)
	{
		i = 0;
		k = j;
		while (needle[i] == haystack[k] && k < len)
		{
			i++;
			k++;
			if (needle[i] == '\0')
				return ((char *) haystack + j);
		}
		j++;
	}
	return (NULL);
}
