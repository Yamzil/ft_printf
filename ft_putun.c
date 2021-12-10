/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:52:52 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/10 22:56:24 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putun(int nbr, int *len)
{
    
    unsigned nb;
    
    nb = nbr;
    if (nb < 10)
        ft_putchar(nb + 48);
        len += 1;
        
    else
    {
        ft_putun(nb / 10);
        ft_putun(nb % 10);        
    }
return(len);
}