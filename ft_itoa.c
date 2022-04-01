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

static int	put_rec(long long nbr, char *str, int is_negative)
{
	int	mod;
	int	index;

	if (nbr < 10)
	{
		if (is_negative && nbr != 0)
		{
			str[0] = '-';
			str[1] = nbr + '0';
			return (2);
		}
		str[0] = nbr + '0';
		return (1);
	}
	index = put_rec(nbr / 10, str, is_negative);
	mod = nbr % 10;
	str[index] = mod + '0';
	return (index + 1);
}

char	*ft_itoa(int n)
{
	int			is_negative;
	long long	nbr;
	char		*s_nbr;

	nbr = (long long)n;
	s_nbr = (char *)malloc(sizeof(char *) * 40);
	if (s_nbr == NULL)
		return (NULL);
	if (n < 0)
	{
		is_negative = 1;
		nbr *= -1;
	}
	else
		is_negative = 0;
	s_nbr[put_rec(nbr, s_nbr, is_negative)] = '\0';
	return (s_nbr);
}
