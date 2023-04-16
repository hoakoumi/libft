/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:15:37 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/09 22:44:37 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	h;
	unsigned char	*s;
	size_t			i;

	h = (unsigned char)c;
	s = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		s[i] = h;
		i++;
	}
	return (b);
}
