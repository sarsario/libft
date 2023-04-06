/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 08:17:30 by osarsari          #+#    #+#             */
/*   Updated: 2023/04/07 00:22:01 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convert the initial portion of a string pointed to by `str` to an integer.
**
** `str` : the string to be converted.
**
** Returns:
** The converted integer value.
*/

#include "../libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	int		neg;

	res = 0;
	neg = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		neg = *str == '-';
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	if (neg)
		res = -res;
	return ((int)res);
}
