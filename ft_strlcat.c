/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:41:10 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/23 15:41:10 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s_i;
	size_t	result;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		result = ft_strlen(src) + size;
	else
		result = ft_strlen(dest) + ft_strlen(src);
	i = 0;
	s_i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[s_i] != '\0' && i + 1 < size)
	{
		dest[i] = src[s_i];
		i++;
		s_i++;
	}
	dest[i] = '\0';
	return (result);
}
