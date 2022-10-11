/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:54:39 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 18:52:03 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	j;

	j = ft_strlen((char *)str);
	while (j >= 0)
	{
		if (str[j] == c)
			return ((char *)str + j);
		j--;
	}
	return (0);
}
