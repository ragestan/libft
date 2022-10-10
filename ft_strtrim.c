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
int ft_strlen(char const *s1, char const *set)
{
    int i,j,len;
    len=i=j=0;
    while(s1[i] != '\0')
        {
            j=0;
            while(set[j])
            {
                if(s1[i]==set[j])
                {
                    len++;
                    break;
                }
                j++;
            }
            i++;
        }
        return i-len;
}
char *ft_strtrim(char const *s, char const *set)
{
    char *dest;
    int i;
    int j;
    int k;
    int len;

    k = 0;
    i = 0;
    j = 0;
    len = ft_strlen(s,set);
    dest = malloc(len+1);
    while(s[i] != '\0')
    {
        while(s[i]!= set[j] && set[j] != '\0')
        {
            j++;
        }
            if(s[i] != set[j])
            {
                dest[k] = s[i];
                k++;
            }
            i++;
            j = 0;
    }  
    dest[k]=0;
    return dest;
}
