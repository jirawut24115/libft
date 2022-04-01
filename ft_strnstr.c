/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:29:54 by jchompoo          #+#    #+#             */
/*   Updated: 2022/03/04 14:13:26 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t		l;

	if (*find == '\0')
		return ((char *)str);
	l = ft_strlen((char *)find);
	while (*str && len-- >= l)
	{
		if (*str == *find
			&& (ft_memcmp(str, find, l) == 0))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
