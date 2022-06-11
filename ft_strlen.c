/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:05:15 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 12:01:58 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char a[20]="curso42";

	printf("%zu\n",strlen(a));

	return(0);
}
*/
