/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:41 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/08 15:01:34 by zbentalh         ###   ########.fr       */
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

int ft_strlenlol(char const *s, char const *set)
{
    int i;
    int j;
    int len;

    len = ft_strlen((char *)s);
    i = 0;
    j = 0;
    while(s[i])
    {
        while(s[i] != set[j] && set[j])
        {
            j++;
        }
        if(s[i] != set[j])
        {   
            j = 0;
            break;
        }
        j = 0;
        i++;
    }
    while(i <= len)
    {
        while(s[len] != set[j] && set[j])
        {
            j++;
        }
        if(s[len] != set[j])
            break;
        j = 0;
        len--;
    }
    return (len - i);
}
char *ft_strtrim(char const *s, char const *set)
{
    char  *dest;
    int i;
    int j;
    int k;
    int len;

    len = ft_strlen((char *)s);
    k = 0;
    i = 0;
    j = 0;
    dest = malloc(ft_strlenlol(s,set) + 2);
    while(s[i])
    {
        while(s[i] != set[j] && set[j])
        {
            j++;
        }
        if(s[i] != set[j])
        {   
            j = 0;
            break;
        }
        j = 0;
        i++;
    }
    while(i <= len)
    {
        while(s[len] != set[j] && set[j])
        {
            j++;
        }
        if(s[len] != set[j])
            break;
        j = 0;
        len--;
    }
    while(i<=len)
    {
        dest[k] = s[i];
        i++;
        k++;
    }
    dest[k] = '\0';
    return (dest);
}