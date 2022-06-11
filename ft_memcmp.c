/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 09:35:27 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 11:55:40 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A função memcmp() compara a string de bytes s1 com a string de bytes s2. Assume-se que ambas as cadeias têm n bytes de comprimento
//A função memcmp() retorna zero se as duas strings forem idênticas, caso contrário, retorna a diferença entre a primeira dois bytes diferentes

#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ( i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char str1[] = "abcdej";
	char str2[] = "abcdef";
	int resultado;

	resultado = ft_memcmp(str1,str2, 6);

	printf("%d\n", resultado);
		return(0);
}
*/
