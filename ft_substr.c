/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:48:28 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/08 13:50:46 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	char *dest;
	dest=malloc(len+1);
	i=0;
	if(s == NULL || str == NULL)
		return (NULL);
	while(len > i)
	{
		dest[i] = *(s + start + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
