/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:43:24 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/16 19:43:24 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (dst == src || !n)
		return (dst);
	i = 0;
	j = n;
	if (dst < src)
	{
		while (i < n)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (j > 0)
		{
			*((char *)dst + j) = *((char *)src + j);
			n--;
		}
	}
	return (dst);
}
