/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:42:51 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/12 17:18:12 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthexalow(int nb)
{    
    char temp;
    char *base;
    int i;
    
    base = "0123456789abcdef";
    i = 0
    if (nb < 16)
    {
        temp = base[nb];
        write(1, &temp, 1);
        i++;
    }
    else
    {
       i += ft_puthexalow(nb / 16);
       i += ft_puthexalow(nb % 16);
    }
    return(i);
}