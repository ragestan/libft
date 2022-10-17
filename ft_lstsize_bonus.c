/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:07:26 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/15 12:17:32 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	ptr = lst;
	if (lst == NULL)
		return (0);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> next;
	}
	return (count);
}
