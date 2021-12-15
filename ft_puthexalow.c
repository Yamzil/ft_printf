/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:42:51 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/15 18:47:26 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexalow(unsigned int nb)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (nb < 16)
	{
		write(1, &base[nb], 1);
		i++;
	}
	else
	{
		i += ft_puthexalow(nb / 16);
		i += ft_puthexalow(nb % 16);
	}
	return (i);
}
