/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:46:25 by jchompoo          #+#    #+#             */
/*   Updated: 2022/04/01 08:52:31 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t size)
{
	unsigned char	*bufc;
	size_t			i;

	bufc = (unsigned char *)buf;
	i = 0;
	while (i < size)
	{
		bufc[i] = c;
		i++;
	}
	return (bufc);
}
