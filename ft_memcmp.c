/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:08:21 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/08 00:41:27 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c;
	unsigned char	*l;

	i = 0;
	c = (unsigned char *)s1;
	l = (unsigned char *)s2;
	while (i < n)
	{
		if (c[i] != l[i])
			return (c[i] - l[i]);
		i++;
	}
	return (0);
}
