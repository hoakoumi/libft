/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:53:57 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/08 17:53:10 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lent(int a)
{
	int	len;

	len = 0;
	if (a <= 0)
		len++;
	while (a != 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*k;
	int		len;

	nb = n;
	k = (char *)(malloc ((lent(nb) + 1) * sizeof (char)));
	len = lent(nb);
	if (!k)
		return (NULL);
	k[len] = '\0';
	if (nb < 0)
	{
		k[0] = '-';
		nb = -nb;
	}
	if (n == 0)
		k[0] = '0';
	len--;
	while (nb)
	{
		k[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (k);
}
