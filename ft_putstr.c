/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:31:42 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/10 23:10:51 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
return(i);
}
int ft_putstr(char str)
{
    int i;
    
    i = ;
    while (str[i])
        write(1,&str[i],1);
    return(ft_strlen(str));
}