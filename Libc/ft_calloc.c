/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 08:48:43 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/10 11:23:50 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

/*
** Allocates memory for an array of `count` elements of `size` bytes each and
** returns a pointer to the allocated memory. The memory is set to zero.
**
** count:	The number of elements to allocate memory for.
** size:	The size of each element to allocate memory for.
**
** returns:
** A void pointer to the allocated memory if successful, NULL otherwise.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	total = count * size;
	if (total / count != size || total / size != count)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
