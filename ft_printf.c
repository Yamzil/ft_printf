/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:57:55 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/10 22:56:15 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_check(char *str,	va_list arg_list)
{
	int j;

	j = 0;
	if (str[j] == 'c')
		ft_putchar(va_arg(arg_list, int));
	else if (str[j] == 's')
		ft_putstr(va_arg(arg_list, char *));
	else if (str[j] == 'd' || str[j] == 'i')
		ft_putnbr(va_arg(arg_list, int));
	else if (str[j] == 'u')
		ft_putun(va_arg(arg_list, unsigned int));
	else if (str[j] == 'x')
		ft_puthexalow();
	else if (str[j] == 'X')
		ft_puthexaupper();
	
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	int	i;
	int	count;

	i = 0;
	count = 0;
	va_start (arg_list, format)
	while (format[i])
	{
		while (format[i] != '%')
			i++;
		if (format[i] == '%')
			count += ft_check(str, arg_list);	
	}
	return(count);
}