/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneto-co <gneto-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:39:57 by gneto-co          #+#    #+#             */
/*   Updated: 2023/10/13 09:26:35 by gneto-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char		c;
	int long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
	}
	if (l > 9)
	{
		c = '0' + l % 10;
		ft_putnbr(l / 10);
		ft_putchar(c);
	}
	else
	{
		c = l + '0';
		ft_putchar(c);
	}
}