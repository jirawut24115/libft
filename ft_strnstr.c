/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:29:54 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/28 22:16:08 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		l;
	const void	*h;
	const void	*n;

	h = haystack;
	n = needle;
	if (*needle == '\0')
		return ((char *)haystack);
	l = ft_strlen((char *)needle);
	while (*haystack && len-- >= l)
	{
		if (*haystack == *needle
			&& (ft_memcmp(h, n, l) == 0))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
