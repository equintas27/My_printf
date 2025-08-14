/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:39:46 by equintas          #+#    #+#             */
/*   Updated: 2025/07/19 07:22:18 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_put_nbr(int nbr);
int		ft_put_unsigned_int(unsigned int nbr);
int		ft_put_hexa(unsigned int nbr, char up);
int		ft_put_ptr(void *ptr);
int		ft_printf(const char *str, ...);
int		ft_put_hexa_ptr(unsigned long nbr);
#endif
