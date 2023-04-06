/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:33:10 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 23:04:19 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

// If we encounter char in s == c
// in_word = 0 which means we are not in a word
// and go to next char in s
// ELSE if (!in_word) which means we were previously not in a word
// and char != c
// then we count a new word.
// and set in_word = 1 because we entered a word.
// and the only way for the word to end is if we encounter c again
static unsigned int	ft_count_words(char const *s, char c)
{
	unsigned int	count;
	int				in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

// TODO char *extract_word(char *s, char c);
// Need to extract each word from s and add to **split
char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	nb_words;
	int				i;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (nb_words + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < nb_words)
	{
		i++;
	}
	return (split);
}
