/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:13:22 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 10:18:51 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A função strlcat concatenam strings.
//A função strlcat() anexa a string src terminada em NUL ao final de dst. Ele anexará no máximo tamanho - strlen(dst) - 1 bytes, terminando com NUL o resultado.
//A função strlcat() retorna o comprimento total da string que tentaram criar. Para strlcpy() isso significa o comprimento de src. Para strlcat() isso significa o comprimento inicial de dst mais o comprimento de src.

#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize) //se o tamanho do destino for maior que o tamanho que passei
	{
		return (dstsize + src_len);//concatenar tamanho que passei com a origem
	}
	i = 0;
	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

//	return (dstsize + src_len);
//}
/*
#include <string.h>
 
 int main ()
 {
 	char src[] = "abcd";
 	char dest[] = "ellen";
	int  resultado;
	
 	resultado = ft_strlcat(dest, src, 6);
	int original = strlcat(dest, src, 6); 

    printf("%d\n", resultado);
	printf("original: %d\n", original);
 }
*/