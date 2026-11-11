/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:29:24 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:39:59 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;

	if (!src)
		return (size);
	if (!dst)
		return (size + ft_strlen(src));
	slen = ft_strlen(src);
	dlen = 0;
	while (dlen < size && dst[dlen] != '\0')
		dlen++;
	if (size == dlen)
		return (size + slen);
	if (slen < size - dlen)
		ft_memcpy(dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst + dlen, src, size - dlen - 1);
		dst[size - 1] = '\0';
	}
	return (dlen + slen);
}
