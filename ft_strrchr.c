/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:15:34 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/23 20:25:12 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	a;

	a = ft_strlen(str);
	while (a >= 0)
	{
		if (str[a] == (char)c)
			return ((char *)(str + a));
		a--;
	}
	return (0);
}
