/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:37:47 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/06 15:45:42 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*search;

	i = 0;
	search = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			search = (char *)&s[i];
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (search);
}

// int main(void)
// {
//     char str[] = "amadoram";

//     printf("%s", ft_strrchr(str, 'a'));
//     return (0);
// }
