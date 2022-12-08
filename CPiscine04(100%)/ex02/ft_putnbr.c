/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:54:46 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/18 20:52:58 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	param;

	param = nb;
	if (param == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (param < 0)
	{
		param = -param;
		ft_putchar('-');
		ft_putnbr(param);
	}
	else if (param >= 10)
	{
		ft_putnbr(param / 10);
		ft_putchar(param % 10 + '0');
	}
	else
	{
		ft_putchar(param + '0');
	}
}
