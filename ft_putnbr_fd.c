/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:31:44 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/13 21:32:22 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			buf[50];
	unsigned int	tmp;
	int				i;

	i = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		tmp = -n;
		write(fd, "-", 1);
	}
	else
		tmp = n;
	while (tmp)
	{
		buf[i++] = (tmp % 10) + '0';
		tmp /= 10;
	}
	while (i--)
		write(fd, buf + i, 1);
}
