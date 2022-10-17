/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:47:36 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/17 11:49:50 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*n;
	t_list	*full;

	if(!f || !del)
	   return (NULL);
	full = NULL;
	while(lst)
	{
		if(!(n = ft_lstnew((*f)(lst -> content))))
			{
				while(full)
				{
					n = full -> next;
					(*del)(full ->content);
					free(full);
					full = n;
				}
				lst = NULL;
				return (NULL);
			}
			ft_lstadd_back(&full, n);
			lst = lst -> next;
	}
	return (full);
}

						

	
