/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 12:01:06 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/12 12:34:37 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*explorer;
	t_list	*next;

	if (!lst || !del)
		return ;
	explorer = *lst;
	while (explorer)
	{
		next = explorer->next;
		del(explorer->content);
		free(explorer);
		explorer = next;
	}
	*lst = NULL;
}
