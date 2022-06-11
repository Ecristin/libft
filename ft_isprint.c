/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:58:08 by ecristin          #+#    #+#             */
/*   Updated: 2022/05/26 21:07:46 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
// c deve estar estar entre o 32 e o 126 que não imprimíveis da tabela ascii
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
	t = ft_isprint(e);
	printf("%d\n",t);
}
*/
