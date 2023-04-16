/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:38:05 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/08 18:12:14 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strat(char *dest, char *src)
{
	int		i;
	int		j;
	size_t	a;
	size_t	b;
	char	*joi;

	i = 0;
	j = 0;
	if (!dest && !src)
		return (NULL);
	a = ft_strlen(dest);
	b = ft_strlen(src);
	joi = (char *)malloc (sizeof (char) * (a + b + 1));
	if (!joi)
		return (NULL);
	while (dest[i] != '\0')
	{
		joi[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
		joi[i++] = src[j++];
	joi[i] = '\0';
	return (joi);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!(s1) || !(s2))
		return (NULL);
	return (ft_strat((char *)s1, (char *)s2));
}
