/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:58:29 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/11 18:46:56 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size -1)
		{
			if (tab[j] >= tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		j ++;
		}
	j = 0;
	i ++;
	}
}
