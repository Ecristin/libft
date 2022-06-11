/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:32:10 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 13:38:42 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t memo, size_t size)
{
	void *abc;

		if (memo == 0 || size == 0)
		{
			memo = 1;
			size = 1;
		}
		abc = (void *)malloc(memo * size);
		if (!abc)
			return (NULL);
		ft_bzero(abc, memo * size);
		return (abc);
}
