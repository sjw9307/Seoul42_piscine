/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:16:35 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/11 18:47:10 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	end_point;

	i = 0;
	end_point = size -1;
	while (i < (size / 2))
	{
		tmp = tab[end_point - i];
		tab[end_point - i] = tab[i];
		tab[i] = tmp;
		i ++;
	}
}
