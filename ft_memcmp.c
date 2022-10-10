/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:50:53 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/07 18:53:55 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char *s1;
	char *s2;
	i = 0;
	s1 =(char *)str1;
	s2 =(char *)str2;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
