/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:38:09 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/06 14:58:17 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght_src;

	lenght_src = 0;
	i = 0;
	while (src[lenght_src] != '\0')
		lenght_src++;
	if (size == 0)
		return (lenght_src);
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lenght_src);
}
// int	main(void)
// {
// 	char	string[] = "Bom";

// 	printf("\nTamanho: %zu", sizeof(string));
// 	printf("\nRetorno: %zu", ft_strlcpy(string, "Goood", 5));
// 	printf("\nResultado: %s", string);
// }
