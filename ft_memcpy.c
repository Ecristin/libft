/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:06:32 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/15 21:21:37 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!(dst == NULL && src == NULL && n > 0))
		while (n--)
			((char *)dst)[n] = (((char *)src)[n]);
	return (dst);
}
