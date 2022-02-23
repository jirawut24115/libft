/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:21:30 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/16 18:21:30 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	d = dst;
	s = src;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	return (dst);
}
