/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:05:34 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 23:04:27 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

static int	ft_char_in_str(char const c, char const *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = start + ft_strlen(s1) - 1;
	while (*start && ft_char_in_str(*start, set))
		start++;
	while (end > start && ft_char_in_str(*end, set))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, start, end - start + 2);
	return (trimmed);
}
