/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:16:19 by mbeeler           #+#    #+#             */
/*   Updated: 2021/12/07 13:51:32 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = -1;
	while (s2[++j] != '\0')
		s1[i++] = s2[j];
	s1[i] = '\0';
	return (s1);
}
