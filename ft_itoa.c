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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_devcunt(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_cunt(int n)
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
	char	*s;
	int		i;
	int		div;

	i = ft_cunt(n);
	s = malloc (i + 1);
	if (!s)
		return (0);
	if (n == -2147483648)
		return (ft_strcpy(s, "-2147483648"));
	i = ft_devcunt(n);
	div = ft_tihaja(i - 1);
	i = 0;
	if (n < 0)
		s[i++] = '-';
	if (n < 0)
		n = -n;
	while (div > 0)
	{
		s[i] = n / div % 10 + 48;
		div = div / 10;
		i++;
	}
	s[i] = 0;
	return (s);
}
