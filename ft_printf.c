/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:57:55 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/12 21:22:37 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_check(const char *str,	va_list arg_list)
{
	int j;

	j = 0;
	if (str[j] == 'c')
		return(ft_putchar(va_arg(arg_list, int)));
	else if (str[j] == 's')
		return(ft_putstr(va_arg(arg_list, char *)));
	else if (str[j] == 'd' || str[j] == 'i')
		return(ft_putnbr(va_arg(arg_list, int)));
	else if (str[j] == 'u')
		return(ft_putun(va_arg(arg_list, unsigned int)));
	else if (str[j] == 'x')
		return(ft_puthexalow(va_arg(arg_list, int)));
	else if (str[j] == 'X')
		return(ft_puthexaupper(va_arg(arg_list, int)));
	else if (str[j] == 'p')
		ft_putstr("0x");
		return(ft_puthexalow(va_arg((arg_litst,unsigned long)))
	else
		i--;	
}
// static char ft_alphabet(const char *str)
// {
// 	int i;

// 	i = 0;
// 	if (str[i] != 'c' || )
// }

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	int	i;
	int	count;

	i = 0;
	count = 0;
	va_start (arg_list, format);
	while (format[i++])
	{
		while (format[i] != '%')
			i++;
		if (format[i] == '%')
			ft_check(&format[i],arg_list);
		
	}
	va_end(arg_list);
	return(count);
}
int main()
{
	printf("%c\n", 'g');
	ft_printf("%c",'g');
}