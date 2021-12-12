/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:31:42 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/12 17:28:55 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putstr(char *str)
{
    int i;
    
    i = 0;
    if (!str)
        write(1, "(null)", 1);
    while (str[i])
        write(1, &str[i++], 1);
    return(i);
}