/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:00:52 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 17:44:26 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	i = 0;
	src1 = (char *)src;
	dest1 = (char *)dest;
	if (n == 0 || src1 == dest1)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return ((void *)dest);
}
