/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:29:34 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:40:07 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;

	if (!src)
		return (0);
	slen = ft_strlen(src);
	if (!dst || size == 0)
		return (slen);
	if (slen < size)
		ft_memcpy(dst, src, slen + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (slen);
}
