/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:06:41 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/09 12:14:27 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int ft_strlen( char *c)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (c[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen((char *)s);
	i = 0;
	str = malloc(len + 1);
	if ( s == 0 || f == 0)
		return (0);
	if (!str)
		return (0);
	while(s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return str;
}