/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 19:03:15 by equintas          #+#    #+#             */
/*   Updated: 2025/07/19 07:21:06 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_converter(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_put_ptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_put_nbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_put_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_put_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_putchar('%');
	else
		return (-1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	if (str == (void *)0)
		return (-1);
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
			len += ft_converter(args, *(++str));
		else if (write(1, str, 1) == -1)
			return (-1);
		else
			len++;
		str++;
	}
	va_end(args);
	return (len);
}
