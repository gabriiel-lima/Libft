/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garodri2 <garodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:54:04 by garodri2          #+#    #+#             */
/*   Updated: 2026/05/12 14:20:39 by garodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*adress;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb > (size_t)-1 / size)
		return (NULL);
	adress = (void *)malloc(nmemb * size);
	if (adress == NULL)
		return (NULL);
	ft_memset(adress, 0, nmemb * size);
	return (adress);
}
