/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:33:35 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/11 18:46:59 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen( char *c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (c[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
