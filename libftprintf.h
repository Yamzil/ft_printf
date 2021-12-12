/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:12:51 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/12 21:02:57 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int ft_puthexalow(int nb);
int ft_puthexaupper(int nb);
int ft_putnbr(int nbr);
int ft_putun(int nbr);
int ft_putstr(char *str);
int ft_putpercent(void);
int ft_putchar(char c);

#endif