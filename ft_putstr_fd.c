/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:57:35 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/09 17:02:32 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_fd(char *s, int fd)
{
	int	i;
	while(s[i])
	{
		write(fd,&s[i],1);
		i++;
	}
}
