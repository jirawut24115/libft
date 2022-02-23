/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:29:54 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/22 21:29:54 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;

	if (*needle == '\0')
		return ((char *)haystack);
	l = ft_strlen(needle);
	while (*haystack && len-- >= l)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, l) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
