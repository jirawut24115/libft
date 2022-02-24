/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:55:18 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/23 15:55:18 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (*(str + i) == c)
			return ((char *)(str + i));
	}
	return (0);
}
