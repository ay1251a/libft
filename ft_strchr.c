/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:28:55 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:39:45 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;
	int				i;

	if (!s)
		return (NULL);
	cc = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
