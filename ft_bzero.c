/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:47:35 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/06 10:57:45 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *b,int c,size_t len)
{
	unsigned char *srt;
	int i;
	i = 0;
	srt = b;

	while (i < len)
	{
		srt[i] = c ;
		i++;
	}
	return b;
}
void	*ft_bzero(void *s,size_t n)
{
	ft_memset(s, 0,n);
}
