/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:28:19 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 12:29:41 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
		int resultado;

	resultado = ft_memcmp("t\200", "t\0", 2);

	printf("%d\n", resultado);
		return(0);
}