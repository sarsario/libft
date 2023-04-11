/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:33:10 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/11 12:59:26 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

static int	count_words(char *s, char c)
{
	int	word_count;

	if (!s)
		return (0);
	word_count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			word_count++;
		}
	}
	return (word_count);
}

static char	*extract_word(char *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	word = s;
	while (*word && *word != c)
	{
		word++;
		len++;
	}
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (*s && *s != c)
		*word++ = *s++;
	*word = 0;
	return (word - len);
}

char	**ft_split(char *s, char c)
{
	char	**split;
	char	*word;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			word = extract_word(s, c);
			if (!word)
			{
				while (i >= 0)
					free(split[--i]);
				free(split);
				return (NULL);
			}
			split[i] = word;
			s += ft_strlen(word);
			i++;
		}
	}
	return (split);
}
