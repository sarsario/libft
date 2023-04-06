/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:17:19 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 23:03:07 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	needle_len;

// 	if (!needle)
// 		return ((char *)haystack);
// 	needle_len = ft_strlen(needle);
// 	while (*haystack && len >= needle_len)
// 	{
// 		if (len < needle_len)
// 			return (NULL);
// 		if (ft_strncmp(haystack, needle, needle_len) == 0)
// 			return ((char *)haystack);
// 		haystack++;
// 		len--;
// 	}
// 	return ((char *)haystack);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && (i + j < len) && (haystack[i
				+ j] == needle[j]))
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
