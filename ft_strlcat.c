/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:41:38 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/06 15:41:58 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	if (size <= dlen)
		return (size + slen);
	if (size > 0)
	{
		j = 0;
		while (src[j] != '\0' && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '\0';
	return (dlen + slen);
}

// int main(void)
// {
//     char srcc[5] = "dia";
//     char destt[6] = "bom ";

//     printf("\nSRC: %s", srcc);
//     printf("\nDEST: %s", destt);
//     printf("\nReturn: %zu", ft_strlcat(destt, srcc, sizeof(destt)));
//     printf("\nSRC: %s", srcc);
//     printf("\nDEST: %s", destt);
//     return (0);
// }