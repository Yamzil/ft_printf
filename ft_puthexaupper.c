/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:59:18 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/12 15:16:33 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int ft_puthexaupper(int nb)
{
    char nbr;
    char *temp;
    int i;

    temp = "0123456789ABCDEF";
    i = 0;
    if (nb < 16)
    {
        nbr = temp[nb];
        write (1, &nbr, 1);
        i++;
    }
    else
    {
        i += ft_puthexaupper(nb / 16);
        i += ft_puthexaupper(nb % 16);
    }
    return(i);
}