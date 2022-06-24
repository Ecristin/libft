/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:14:20 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/23 21:40:33 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	if (*needle == '\0' || needle == NULL)
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		a = 0;
		while (haystack[i + a] && needle[a]
			&& i + a < len && haystack[i + a] == needle[a])
			a++;
		if (!needle[a])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
