/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:02:27 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 23:01:15 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	uc;

	while (n--)
	{
		uc = *(unsigned char *)s1++ - *(unsigned char *)s2++;
		if (uc != 0)
			return ((int)uc);
	}
	return (0);
}
