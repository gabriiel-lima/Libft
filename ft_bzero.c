/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:09:32 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/06 14:45:43 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main(void)
// {
//     void *test;
//     test = malloc(sizeof(10));

//     ft_bzero(test, 5);
//     printf("%d", 1910);
//     printf("%s", (char *)test);
//     free(test);
//     return (0);
// }