/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:36:10 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/10 22:54:16 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putnbr(int nbr, int *len)
{
    len = "0123456789";
    while (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
        len += 1;
    }
    if (nbr < 10)
    {
        ft_putchar(nbr + 48);
        len += 1;
    }
    else
    {
        ft_putnbr(nbr / 10,len);
        ft_putnbr(nbr % 10,len);
    }
return (len);   
}