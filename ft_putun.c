/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:52:52 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/15 18:49:15 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putun(unsigned int nbr)
{
	int				i;

	i = 0;
	if (nbr < 10)
	{
		i += ft_putchar(nbr + 48);
	}
	else
	{
		i += ft_putun(nbr / 10);
		i += ft_putun(nbr % 10);
	}
	return (i);
}
