/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:35:57 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/24 21:35:57 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buff;

	buff = (void *)malloc(size * count);
	if (!buff)
		return (NULL);
	ft_bzero(buff, size * count);
	return (buff);
}
