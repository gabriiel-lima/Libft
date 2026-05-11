/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:57:32 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/06 14:56:28 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t t)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < t)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
//     void *test;
//     test = malloc(10);

//     ft_memset(test, 48, 10);
//     printf("%s", (char *)test);
//     free(test);
//     return (0);
// }