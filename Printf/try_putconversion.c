/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_putconversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:22:12 by osarsari          #+#    #+#             */
/*   Updated: 2023/05/06 13:42:47 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	try_putconversion(char c, va_list args, int *total_printed)
{
	if (c == 'c')
		return (try_putchar(va_arg(args, int), total_printed));
	else if (c == 's')
		return (try_putstr(va_arg(args, char *), total_printed));
	else if (c == 'p')
		return (try_putptr(va_arg(args, void *), total_printed));
	else if (c == 'd' || c == 'i')
		return (try_putnbr(va_arg(args, int), total_printed));
	else if (c == 'u')
		return (try_putnbr(va_arg(args, unsigned int), total_printed));
	else if (c == 'x' || c == 'X')
		return (try_puthex(c, va_arg(args, unsigned int), total_printed));
	else if (c == '%')
		return (try_putchar(c, total_printed));
	else
		return (-1);
}
