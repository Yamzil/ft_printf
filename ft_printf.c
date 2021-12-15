/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:57:55 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/15 18:56:17 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char a, va_list arg_list)
{
	if (a == 'c')
		return (ft_putchar(va_arg(arg_list, int)));
	else if (a == 's')
		return (ft_putstr(va_arg(arg_list, char *)));
	else if (a == 'd' || a == 'i')
		return (ft_putnbr(va_arg(arg_list, int)));
	else if (a == 'u')
		return (ft_putun(va_arg(arg_list, unsigned int)));
	else if (a == 'x')
		return (ft_puthexalow(va_arg(arg_list, unsigned int)));
	else if (a == 'X')
		return (ft_puthexaupper(va_arg(arg_list, unsigned int)));
	else if (a == 'p')
		return (ft_putstr("0x") + ft_putcent(va_arg(arg_list, unsigned long)));
	else if (a == '%')
		return (ft_putchar('%'));
	return (ft_putchar(a));
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start (arg_list, format);
	while (format[i])
	{
		if (format[i] != '%')
			count += ft_putchar (format[i]);
		else if (format[i] == '%')
			count += ft_check (format[++i], arg_list);
		i++;
	}
	va_end (arg_list);
	return (count);
}
