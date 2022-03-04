/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:46:25 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/28 22:06:07 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && str)
	{
		*((char *)str + i) = c;
		i++;
	}
}
