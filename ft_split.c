/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:28:48 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:39:43 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_split(char **split, size_t i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
	return (NULL);
}

static char	**ft_fill_split(char const *s, char c, char **split)
{
	size_t	i;
	size_t	start;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			split[word] = ft_substr(s, start, i - start);
			if (!split[word])
				return (ft_free_split(split, word));
			word++;
		}
	}
	split[word] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	words;

	if (!s)
		return (NULL);
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (ft_fill_split(s, c, split));
}
