/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:15:34 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 12:03:03 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A função strrchr () retorna um ponteiro para a última ocorrência do caractere c na string s retorna a primeira ocorrência

#include "libft.h"
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
	int a;
	a = ft_strlen(str);

	while (str[a])
	{
		while (str[a] != c)
			return ((char *)str);
		a--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{	
	const char str[] = "cristineellen";
	const char encontre = 't';
	char *resultado;

	resultado = strrchr(str,encontre);

	printf("%s\n",resultado);

		return(0);
}
*/
