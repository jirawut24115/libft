/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:20:21 by jchompoo          #+#    #+#             */
/*   Updated: 2022/04/01 10:20:21 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c_lst;
	t_list	*next_lst;

	if (lst == NULL)
		return ;
	c_lst = *lst;
	while (c_lst != NULL)
	{
		next_lst = c_lst->next;
		ft_lstdelone(c_lst, del);
		c_lst = next_lst;
	}
	*lst = NULL;
}
