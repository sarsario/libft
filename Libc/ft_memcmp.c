/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:02:27 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/11 18:47:30 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** Compares the first n bytes of the memory areas s1 and s2.
**
** s1:	A pointer to the first memory area.
** s2:	A pointer to the second memory area.
** n:	The number of bytes to compare.
**
** Returns:
** An integer less than, equal to, or greater than zero
** if the first n bytes of s1 are found,
** respectively, to be less than, to match, or be greater than
** the first n bytes of s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*us1;
	const unsigned char	*us2;

	if ((!s1 && !s2) || n == 0)
		return (0);
	if (!s1)
		return (-(unsigned char)*((const unsigned char *)s2));
	if (!s2)
		return ((unsigned char)*((const unsigned char *)s2));
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (--n && *us1 == *us2)
	{
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}
