/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 22:15:00 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/25 22:15:00 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digit(int n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_recurv_store(char *dst, unsigned int n)
{
	if (n < 10)
		*dst = n + '0';
	else
	{
		*dst = n % 10 + '0';
		ft_recurv_store(dst - 1, n / 10);
	}
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*result;
	size_t			l;

	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	l = ft_count_digit(n);
	if (n < 0)
		l += 1;
	result = (char *)malloc(sizeof(char) * l + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		ft_recurv_store((result + l - 1), -nbr);
		*result = '-';
	}
	else
		ft_recurv_store((result + l - 1), nbr);
	result[l] = '\0';
	return (result);
}
