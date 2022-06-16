/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:39:26 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/15 21:24:16 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = dst;
	if ((size_t)dst < (size_t)src)
		while (len--)
			*((unsigned char *)dst++) = *((unsigned char *)src++);
	else if ((size_t) dst > (size_t) src)
		while (len--)
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
	return (tmp);
}
