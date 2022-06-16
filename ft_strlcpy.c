/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:48:16 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/15 21:52:39 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len +1 < dstsize)
		ft_memcpy(dst, src, src_len +1);
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize -1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}
