/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:56:25 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/08 12:17:37 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
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
	ft_memset(s,0,n);
}

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;
	ptr = malloc(count * size);
	if(ptr == NULL)
		return(NULL);
	ft_bzero(ptr ,size * count);
	return(ptr);
}
	
	

