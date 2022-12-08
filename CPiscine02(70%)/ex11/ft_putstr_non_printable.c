/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:00:06 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/12 22:05:32 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(unsigned char c)
{
	write(1, &c, 1);
}

void	print_hexa(unsigned char c)
{
	unsigned char	hex_n1;
	unsigned char	hex_n2;

	print_char('\\');
	if (c == 10)
	{
		print_char('0');
		print_char(c + 87);
		return ;
	}
	else
	{
		hex_n1 = c / 16;
		hex_n2 = c % 16;
	}
	if (hex_n1 < 10)
		print_char(hex_n1 + '0');
	else
		print_char(hex_n1 + 87);
	if (hex_n2 < 10)
		print_char(hex_n2 + '0');
	else
		print_char(hex_n2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			print_char(str[i]);
		else
			print_hexa(str[i]);
		i++;
	}
}
