/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 04:41:22 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/20 17:20:52 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{	
	int i;
	int *dst;
	long long mn;
	long long mx;

	i = 0;
	mn = min;
	mx = max;
	if (min >= max)
		return (NULL);
	
	dst = (int *) (malloc(mx-mn) * sizeof(int));
	if (dst == 0)
		return (0);
	while (mn < mx)
	{
		dst[i] = mn;
		mn++;
		i++;
	}
	return (dst);
}
