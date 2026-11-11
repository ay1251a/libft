/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:27:52 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:39:28 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*str;

	i = 0;
	x = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = x;
		i++;
	}
	return (s);
}
