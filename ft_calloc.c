/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:24:11 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:38:46 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	total;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	total = nmemb * size;
	if (total == 0)
		total = 1;
	array = malloc(total);
	if (!array)
		return (NULL);
	ft_bzero(array, total);
	return (array);
}
