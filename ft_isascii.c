/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:43:27 by ecristin          #+#    #+#             */
/*   Updated: 2022/05/26 20:57:23 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
// c deverá esta entre 0 e 127 da tabela ascii que é toda a tabela
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char e;
	int t;

	e = 'A';
	t = ft_isascii(e);
	printf("%d\n",t);
}
*/
