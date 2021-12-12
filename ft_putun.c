/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:52:52 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/12 15:06:29 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putun(int nbr)
{
    int i;
    unsigned int nb;
    
    nb = nbr;
    i = 0;
    if (nb < 10)
    {
        i += ft_putchar(nb + 48);
    }   
    else
    {
        i += ft_putun(nb / 10);
        i += ft_putun(nb % 10);        
    }
return(i);
}