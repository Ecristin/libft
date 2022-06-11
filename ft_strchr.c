/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:30:06 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/04 12:37:46 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
  //A função strchr () retorna um ponteiro para a primeira ocorrência do caractere c na string s
  //retorna a primeira ocorrência
 
  #include <string.h>
 
  char    *ft_strchr ( const  char *s, int c)
  {
              
      while (*s)
      {
          if (*s == c)
              return ((char *)s);
          s++;
      }
      if (*s == c)
          return (( char *)s);
    else
      return (0);
  }

/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char str[] = "cristine";
	const char encontre = 't';
    char	*resultado;
	resultado = ft_strchr(str,encontre);

	printf("%s\n", resultado);

	return(0);
}
*/
