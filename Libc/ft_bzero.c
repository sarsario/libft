/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:51:06 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 22:59:00 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (n == 0)
		return ;
	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
