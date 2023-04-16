/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:11:00 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/08 00:33:33 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*k;

	i = 0;
	if (!s || !f)
	{
		return (0);
	}
	k = (char *)malloc ((ft_strlen(s) + 1) * sizeof (char));
	if (!k)
		return (NULL);
	while (s[i])
	{
		k[i] = f(i, s[i]);
		i = i + 1;
	}
	k[i] = '\0';
	return (k);
}
