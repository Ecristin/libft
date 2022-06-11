/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:22:17 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/04 12:30:14 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		//isalpha e isdigit junto. Se c for entre a e z minusculo, entre A e Z maiusculo e entre 0 e 9
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char e;
	int t;

	e = '%';
	t = ft_isalnum(e);
	printf("%d\n", t);
}
*/
