/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:12:31 by osarsari          #+#    #+#             */
/*   Updated: 2023/05/06 13:45:43 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	is_supported_conversion(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		total_printed;

	total_printed = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%' && *(s + 1))
		{
			if (!is_supported_conversion(*(s + 1)))
				return (total_printed);
			if (try_putconversion(*(++s), args, &total_printed) < 0)
				return (total_printed);
		}
		else
		{
			if (try_putchar(*s, &total_printed) < 0)
				return (total_printed);
		}
		s++;
	}
	va_end(args);
	return (total_printed);
}
