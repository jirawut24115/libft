/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:37:54 by jchompoo          #+#    #+#             */
/*   Updated: 2022/02/24 22:37:54 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_len(char const *s, int c)
{
	size_t	i;

	i = 0;
	while (*s && *s++ != c)
		i++;
	return (i);
}

static size_t	ft_word_count(char const *str, int c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		count++;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	return (count);
}

static char	**ft_free_arr(char **s, int i)
{
	while (s[i] != NULL && i >= 0)
	{
		free(s[i]);
		s[i] = NULL;
		i--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	l;
	size_t	i;

	count = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			l = ft_word_len(s, c);
			result[i] = ft_substr(s, 0, l);
			if (result[i] == NULL || i < count)
				return (ft_free_arr(result, i));
			s += l;
		}
	}
	result[count] = '\0';
	return (result);
}
