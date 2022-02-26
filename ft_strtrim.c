/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:03:16 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/24 22:03:16 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	char	*result;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	l = ft_strlen((char *)s1);
	while (l && s1[l - 1] && ft_strchr(set, s1[l - 1]) != 0)
		l--;
	result = (char *)malloc(sizeof(char) * (l + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, l);
	result[l] = '\0';
	return (result);
}
