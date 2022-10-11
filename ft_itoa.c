/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:24:17 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 17:39:42 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_tihaja(int n)
{
	int	div;

	div = 1;
	while (n > 0)
	{
		div = div * 10;
		n--;
	}
	return (div);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		div;

	i = ft_count(n);
	div = ft_tihaja(i - 1);
	str = malloc (i + 1);
	if (!str)
		return (0);
	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		str[i++] = '-';
		n = -n ;
	}
	while (div > 0)
	{
		str[i] = n / div + 48;
		n = n / div;
		div = div / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
