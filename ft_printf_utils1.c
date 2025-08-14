/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:21:50 by equintas          #+#    #+#             */
/*   Updated: 2025/07/17 10:23:33 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned int nbr, char up)
{
	char	*base;
	int		len;
	int		mod;
	int		aux;

	if (up == 'X')
		base = "0123456789ABCDEF";
	else if (up == 'x')
		base = "0123456789abcdef";
	else
		return (-1);
	len = 0;
	aux = 0;
	mod = 0;
	if (nbr > 15)
	{
		aux += ft_put_hexa(nbr / 16, up);
		if (aux == -1)
			return (-1);
		len += aux;
	}
	mod = nbr % 16;
	if (write(1, &base[mod], 1) == -1)
		return (-1);
	return (len + 1);
}

int	ft_put_hexa_ptr(unsigned long nbr)
{
	char	*base;
	int		len;
	int		mod;
	int		aux;

	base = "0123456789abcdef";
	len = 0;
	aux = 0;
	mod = 0;
	if (nbr > 15)
	{
		aux = ft_put_hexa_ptr(nbr / 16);
		if (aux == -1)
			return (-1);
		len += aux;
	}
	mod = nbr % 16;
	if (write(1, &base[mod], 1) == -1)
		return (-1);
	return (len + 1);
}
