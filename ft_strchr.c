/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:41:47 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 18:00:22 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	l;

	l = ft_strlen(str);
	i = 0;
	if (c == '\0')
	{
		return ((char *)str + l);
	}
	while (str[i])
	{
		if (str[i] == (char )c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
