/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:32:13 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 18:06:29 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_mystrlen(char *a, char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a[i])
		i++;
	while (b[j])
		j++;
	return (i + j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		k;
	int		i;
	int		j;

	i = 0;
	j = 0;
	k = ft_mystrlen((char *)s1, (char *)s2);
	dest = malloc(k);
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
