/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:19:54 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/15 12:17:49 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(t_list));
	if (!l)
		return (0);
	if (content == NULL)
	{
		l -> content = 0;
		l -> next = NULL;
		return (0);
	}
	else
	{
		l -> content = content;
		l -> next = NULL;
		return (l);
	}
}
