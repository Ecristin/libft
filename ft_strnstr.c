/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:14:20 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/15 22:04:34 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *primeira, const char *segunda, size_t len)
{
	size_t	i;
	size_t	a;

	if (!primeira || !segunda)
		return ((char *)(primeira));
	if (!primeira || segunda[0] == '\0')
		return ((char *)(primeira));
	i = 0;
	while (primeira[i] != '\0' && i < len)
	{
		a = 0;
		while (primeira[i + a] && segunda[a]
			&& i + a < len && primeira[i + a] == segunda[a])
			a++;
		if (!segunda[a])
			return ((char *)(primeira + i));
		i++;
	}
	return (NULL);
}
