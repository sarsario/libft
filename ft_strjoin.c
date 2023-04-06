/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:47:00 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/05 11:05:16 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*fusion;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	fusion = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!fusion)
		return (NULL);
	while (*s1)
		*fusion++ = *s1++;
	while (*s2)
		*fusion++ = *s2++;
	*fusion = 0;
	fusion -= (s1_len + s2_len + 1);
	return (fusion);
}
