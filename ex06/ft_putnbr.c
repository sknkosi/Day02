/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:25:43 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/23 15:26:02 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*The function prints a number entered as a parameter. The functionhas is able tto display all possible values within an int type variable.*/ 


void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
