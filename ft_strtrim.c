/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:11:15 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/08 18:16:21 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (0);
	if (!set)
		return ((char *) s1);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	j = ft_strlen(s1);
	while (j != 0)
	{
		if (ft_strchr(set, s1[j]) == 0)
			break ;
		j--;
	}
	if (j == 0)
		return (ft_strdup(""));
	return (ft_substr(s1, i, (j - i) + 1));
}
