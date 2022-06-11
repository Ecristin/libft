/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:27:37 by ecristin          #+#    #+#             */
/*   Updated: 2022/06/11 09:28:34 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	t;
	int	e;
	int	result;

	t = 0;
	e = 1;
	result = 0;
	while (str[t] == '\t' || str[t] == '\n' || str[t] == '\v' ||
				str[t] == '\f' || str[t] == '\r' || str[t] == ' ')
		t++;
	if (str[t] == '-' || str[t] == '+')
	{
		if (str[t] == '-')
			e *= -1;
		t++;
	}
	while (str[t] >= '0' && str[t] <= '9')
	{
		result *= 10;
		result += str[t] - '0';
		t++;
	}
	return (result * e);
}
