/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:51:20 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/08 18:13:33 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c;
	unsigned char	*l;

	i = 0;
	c = (unsigned char *)s1;
	l = (unsigned char *)s2;
	if (!s1 && !s2)
		return (0);
	while ((i < n) && (c[i] != '\0' || l[i] != '\0' ))
	{
		if (c[i] != l[i])
			return (c[i] - l[i]);
		i++;
	}
	return (0);
}
