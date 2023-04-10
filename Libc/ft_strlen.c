/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:31:43 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/10 11:34:48 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** Computes the length of the null-terminated string s.
**
** s:	A pointer to the null-terminated string to compute the length of.
**
** Returns:
** The number of characters in the string s, excluding the null-terminator.
*/

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (len);
	while (*s++)
		len++;
	return (len);
}
