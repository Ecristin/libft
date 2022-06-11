/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:30:22 by ecristin          #+#    #+#             */
/*   Updated: 2022/05/26 20:20:06 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
// se c está entre 0 e 9
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char e;
	int t;

	e = '9';
	t = ft_isdigit(e);
	printf("%d\n",t);
}
*/
