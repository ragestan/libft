/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:13:23 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 17:47:24 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t n)
{
	char	*dest1;
	char	*str1;

	dest1 = (char *)dest;
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
		ft_memcpy(dest, str, n);
	}
	return (dest);
}
