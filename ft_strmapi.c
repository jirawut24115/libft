/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:29:14 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/25 23:29:14 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	l;
	size_t	i;

	l = ft_strlen((char *)s);
	result = (char *)malloc(sizeof(char) * (l + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < l)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[l] = '\0';
	return (result);
}
