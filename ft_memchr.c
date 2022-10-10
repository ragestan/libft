/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:10:42 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/07 18:13:50 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
void *ft_memchr(const void *str, int c, size_t n)
{
	char *src;
	int	i;
	src = (char*)str;
	i = 0;
	while(src[i] && i < n)
	{
		if (src[i] == c)
			return(src + i);
		i++;
	}
	return 0;
}
