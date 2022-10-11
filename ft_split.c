/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:13:56 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 17:59:30 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != charset)
		i++;
	return (i);
}

char	*ft_word(char *str, char charset)
{
	int		j;
	int		i;
	char	*word;

	j = ft_strlen(str, charset);
	i = 0;
	word = (char *)malloc((j + 1) * sizeof(char));
	if (!word)
		return (0);
	while (i < j && str[i] != charset)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	ft_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] == c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**string;

	i = 0;
	string = (char **)malloc(sizeof(char *) * (ft_count((char *)s, c) + 1));
	if (!string)
		return (0);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			string[i] = ft_word((char *)s, c);
			i++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	string[i] = 0;
	return (string);
}
