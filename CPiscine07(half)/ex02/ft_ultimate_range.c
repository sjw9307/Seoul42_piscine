/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:12:02 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/20 17:30:12 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *dst;
	long long mn;
	long long mx;

	i = 0;
	mn = min;
	mx = max;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}

	dst = (int *) malloc(sizeof(mx - mn) * sizeof(int));
	if (dst == 0)
		return (-1);
	while (mn < mx)
	{
		dst[i] = mn;
		mn++;
		i++;
	}
	*range = dst;
	return (max - min);
}

int main(void)
{

	int	*arr2;
	int	min2;
	int max2;
	int i;

	min2 = -6;
	max2 = 5;
	i = 0;
	ft_ultimate_range(&arr2, min2, max2); 
	while (min2 < max2)
	{
		printf("%d\n", arr2[i++]);
		min2++;
	}
}
