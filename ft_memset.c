/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:31:38 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 11:59:11 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	//unsigned char *x;

	//x = b;
	i = 0;
	while (i < len)
	{	
		//*x = c;
		//x++;
		//len--;	
		(((unsigned char *)b)[i] = (unsigned char)c);
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char src[] = "ellen";
	char  dest = 'a'; 
	ft_memset(src, dest, 3);
	
   printf("%s\n",src);	
}
*/
