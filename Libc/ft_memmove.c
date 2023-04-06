/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:17:46 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 23:01:41 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_char;
	const char	*src_char;

	dst_char = dst;
	src_char = src;
	if (src_char < dst_char)
	{
		while (len--)
		{
			dst_char[len] = src_char[len];
		}
		return (dst);
	}
	while (len--)
		*dst_char++ = *src_char++;
	return (dst);
}
