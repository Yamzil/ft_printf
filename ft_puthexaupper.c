/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:59:18 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/15 18:47:44 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexaupper(unsigned int nb)
{
	char	*temp;
	int		i;

	temp = "0123456789ABCDEF";
	i = 0;
	if (nb < 16)
	{
		write (1, &temp[nb], 1);
		i++;
	}
	else
	{
		i += ft_puthexaupper(nb / 16);
		i += ft_puthexaupper(nb % 16);
	}
	return (i);
}
