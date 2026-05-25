/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:01:32 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/11 16:17:24 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main(void)
// {
//     int valor = 42;

//     t_list *node = ft_lstnew(&valor);

//     if (!node)
//         return (1);

//     printf("Conteudo: %d\n", *(int *)node->content);

//     if (node->next == NULL)
//         printf("next é NULL\n");

//     free(node);

//     return (0);
// }