/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:56:13 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/24 21:56:13 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	int		i;
	int		j;

	buff = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!buff)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		buff[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		buff[i] = s2[j];
		i++;
		j++;
	}
	buff[i] = '\0';
	return (buff);
}
