/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:17:30 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/07 12:56:47 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** Check if the given character is alphanumeric.
**
** c: the character to be checked
**
** Return:
** Non-zero value if the character is alphanumeric, 0 otherwise.
*/


int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
