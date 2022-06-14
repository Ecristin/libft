/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:45:47 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/13 20:46:33 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map_str;

	i = 0;
	if (!s || !f)
		return (NULL);
	map_str = malloc(ft_strlen(s) + 1);
	if (!map_str)
		return (NULL);
	while (s[i])
	{
		map_str[i] = (*f)(i, s[i]);
		i++;
	}
	map_str[i] = '\0';
	return (map_str);
}

