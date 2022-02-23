/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:41:01 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/22 21:41:01 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;

	result = 0;
	neg = 1;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			neg *= -1;
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += *str++ - '0';
	}
	return (result * neg);
}
