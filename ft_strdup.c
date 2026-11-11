/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:29:02 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:39:52 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	if (!src)
		return (NULL);
	size = ft_strlen(src);
	dest = malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}
