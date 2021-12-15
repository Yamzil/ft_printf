/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:39:39 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/15 18:53:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_puthexalow(unsigned int nb);
int	ft_puthexaupper(unsigned int nb);
int	ft_putcent(unsigned long nb);
int	ft_putnbr(int nbr);
int	ft_putun(unsigned int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char c);

#endif
