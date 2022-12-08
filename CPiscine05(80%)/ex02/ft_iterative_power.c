/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:22:39 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/19 19:11:20 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
