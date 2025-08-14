/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:12:57 by equintas          #+#    #+#             */
/*   Updated: 2025/07/12 11:00:51 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	if (str == (void *)0)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		if (write(1, &str[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_put_nbr(int nbr)
{
	char	c;
	int		len;
	long	numb;

	numb = nbr;
	len = 0;
	if (numb < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		numb *= -1;
		len = 1;
	}
	if (numb > 9)
		len += ft_put_nbr(numb / 10);
	c = numb % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	len += 1;
	return (len);
}

int	ft_put_unsigned_int(unsigned int nbr)
{
	char			c;
	int				len;
	unsigned long	numb;

	numb = nbr;
	len = 0;
	if (numb > 9)
		len += ft_put_unsigned_int(numb / 10);
	c = numb % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	len += 1;
	return (len);
}

int	ft_put_ptr(void *ptr)
{
	int	len;
	int	aux;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	if (write(1, "0x", 2) == -1)
		return (-1);
	len = 0;
	aux = 0;
	len += 2;
	aux = ft_put_hexa_ptr((unsigned long)ptr);
	len += aux;
	return (len);
}
