/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:28:19 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/15 19:35:59 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char		*str;	
	char		str2[] = "bonjour";

	str = ft_strchr(str2, 'b');
	printf("%s", str);

		return(0);
}
