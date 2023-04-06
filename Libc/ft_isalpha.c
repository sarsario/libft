/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:47:21 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/06 22:58:36 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**  The ft_isalpha function tests whether the integer c is an alphabetic
**  character. An alphabetic character is either an uppercase letter or
**  a lowercase letter. The function returns zero if the character is not
**  alphabetic, and a non-zero integer value otherwise.
*/

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
