/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:03:45 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 12:02:36 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strncmp() comparam as strings terminadas em nulo s1 e s2. se for igual imprime 1 e se for diferente imprime 0. N é a quantidade de caracteres que vai ler.
//
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	
	i = 0;
	while (((unsigned char *)s1)[i] != '\0' && ((unsigned char *)s2)[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
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
	int  resultado;

	resultado = ft_strncmp(str1,str2, 6);

	printf("%d\n", resultado);

		return(0);
}
*/
