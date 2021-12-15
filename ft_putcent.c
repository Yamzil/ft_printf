/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:36:59 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/14 22:10:02 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcent(unsigned long nb)
{
	char	temp;
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (nb < 16)
	{
		temp = base[nb];
		write(1, &temp, 1);
		i++;
	}
	else
	{
		i += ft_putcent(nb / 16);
		i += ft_putcent(nb % 16);
	}
	return (i);
}
