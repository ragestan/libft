/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:41 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 19:03:41 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_check(char s, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (s == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen((char *)s);
	i = 0;
	while (ft_check(s[i], set))
	{
		i++;
	}
	while (ft_check(s[len - 1], set) && i < len)
	{
		len--;
	}
	dest = ft_substr(s, i, len - i);
	return (dest);
}
