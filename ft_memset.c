/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:55:40 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 17:48:37 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*srt;
	size_t			i;

	i = 0;
	srt = (unsigned char *)b;
	while (i < len)
	{
		srt[i] = c ;
		i++;
	}
	return (srt);
}
