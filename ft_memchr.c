/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:17:31 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 11:54:58 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



 #include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;

	while ( i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return((unsigned char *)s + i);
		i++;
	}
	return(0);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "cristine";
	//char encontre = "t";
	char *resultado;
	resultado = ft_memchr(str, 't', 3);

	printf("%s\n", resultado);

	return(0);
}
*/
