/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:12:51 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/10 22:59:42 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int ft_putnbr(int nbr, int *len);
int ft_puthexalow(char *str);
int ft_putstr(char str);
int ft_putpercent(void);
int ft_putchar(char c);

#endif