/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:58:16 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/11 09:50:25 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	contador_big;
	size_t	contador_little;

	contador_big = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[contador_big] != '\0' && contador_big < len)
	{
		contador_little = 0;
		while (big[contador_big + contador_little] == little[contador_little]
			&& little[contador_little] != '\0' && (contador_big
				+ contador_little) < len)
		{
			contador_little++;
		}
		if (little[contador_little] == '\0')
		{
			return ((char *)&big[contador_big]);
		}
		contador_big++;
	}
	return (0);
}

// int main(void)
// {
//     char *s1 = "MZIRIBMZIRIBMZE123";
//     char *s2 = "MZIRIBMZE";
//     size_t max = strlen(s2);
//     printf("\nReturn ft: %s", ft_strnstr(s1, s2, max));
//     return (0);
// }
