/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:10:53 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 12:04:18 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c<= 'z')
// se c estiver entre a e z e for minusculo deverá retornar c maiúsculo
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char e;
	int t;

	e = 'a';
	t = ft_toupper(e);
	printf("%c\n",t);
}
*/
