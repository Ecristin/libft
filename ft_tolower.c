/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:23:53 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 12:03:49 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
		if (c >= 'A' && c <= 'Z')
// se c estiver entre A e Z e for maiusculo deverá retornar c minusculo
		    return (c + 32);
		else
			return (c);
}

/*
#include <stdio.h>
 int main(void)
 {
      char e;
      int t;
 
     e = 'A';
	 t = ft_tolower(e);
 	printf("%c\n",t);
}
*/
