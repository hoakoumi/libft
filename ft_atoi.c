/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:14:21 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/09 23:15:39 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	w_space(const	char	*str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	return (i);
}

int	ft_atoi(const	char	*str)
{
	int				i;
	int				sig;
	size_t			r;

	r = 0;
	sig = 1;
	i = w_space(str);
	if (str[i] == '-')
	{
		sig = sig * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0' )
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (sig == 1 && r > __LONG_LONG_MAX__)
		return (-1);
	if (sig == -1 && r > __LONG_LONG_MAX__)
		return (0);
	return (r * sig);
}
