/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:03:13 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/09 17:05:14 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(s[i])
	{
		write(fd,&s[i],1);
		i++;
	}
	write(fd,"\n",1);
}
