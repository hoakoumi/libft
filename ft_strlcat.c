/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:12:40 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/08 21:50:42 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	h;
	size_t	k;
	size_t	j;

	i = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	h = ft_strlen(dst);
	k = ft_strlen(src);
	j = ft_strlen(dst);
	if (dstsize == 0 || dstsize < h)
		return (k + dstsize);
	while (src[i] && dstsize - 1 > h)
	{
		dst[h] = src[i];
		h++;
		i++;
	}
	dst[h] = '\0';
	return (j + k);
}
