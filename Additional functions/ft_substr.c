/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:42 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 23:04:30 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (NULL);
	s_len = ft_strlen(s + start);
	if (s_len < len)
		len = s_len;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (*s && start--)
		s++;
	i = 0;
	while (*s && i++ < len)
		*sub++ = *s++;
	*sub = 0;
	sub -= len + 1;
	return (sub);
}
