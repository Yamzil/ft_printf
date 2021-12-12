/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:36:10 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/12 21:19:53 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putnbr(int nbr)
{
    int i;

    i = 0;
    long long nb;
    nb = nbr;
    while (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
        i++;
    }
    if (nb < 10)
    {
        i += ft_putchar(nb + 48);
    }
    else
    {
        i += ft_putnbr(nb / 10);
        i += ft_putnbr(nb % 10);
    }
return (i);   
}