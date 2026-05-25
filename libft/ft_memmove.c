/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:36:54 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/11 09:12:05 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	unsigned const char	*ps;

	pd = (unsigned char *)dest;
	ps = (unsigned const char *)src;
	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (dest < src)
	{
		while (n--)
			*pd++ = *ps++;
	}
	else
	{
		pd = pd + n - 1;
		ps = ps + n - 1;
		while (n--)
			*pd-- = *ps--;
	}
	return (dest);
}
// int	main(void)
// {
// 	char	src[] = "ABCDE";

// 	ft_memmove(src + 1, src, 3);
// 	printf("Resultado: %s\n", src);
// 	return (0);
// }

/* P R I M E I R A - T E N T A T I V A - COM BUFFER*/
// unsigned char scpy[n];
// while(i < n)
// {
//     scpy[i] = srcptr[i];
//     i ++;
// }
// i = 0;