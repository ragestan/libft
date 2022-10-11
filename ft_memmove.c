/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:13:23 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/06 11:16:37 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest1;
	char *src1;
	size_t i;

	i = 0;
	src1 = (char *)src ;
	dest1 = (char *)dest ;

	if (n == 0 || src1 == dest1)
		return (dest);
	while(i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return ((void *)dest);
}
void *ft_memmove(void *dest, const void *str, size_t n)
{
	char *dest1;
	char *str1;
	size_t i;
	i = 0;
	dest1 = dest;
	str1 = (char *)str;
	if (str1 < dest1)
	{
		dest1 += n - 1;
		str1 += n - 1;
		while (n--)
		{
			*dest1 = *str1;
			dest1--;
			str1--;
		}
	}
	else
	{
		ft_memcpy(dest, str,n);
	}
	return (dest);
}
