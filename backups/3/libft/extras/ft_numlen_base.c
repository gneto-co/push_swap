/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneto-co <gneto-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:10:39 by gneto-co          #+#    #+#             */
/*   Updated: 2023/10/17 15:33:00 by gneto-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen_base(int nbr, int base)
{
	int long	n;
	int			i;

	n = nbr;
	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n >= base)
	{
		n /= base;
		i++;
	}
	return (i);
}
