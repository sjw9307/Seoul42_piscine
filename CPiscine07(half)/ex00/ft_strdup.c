/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 04:12:40 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/20 17:18:23 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(char *src)
{
	int i;
	
	i = 0;
	while (src[i])
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	char *dst;
	int srclen;
	int i;

	srclen = ft_strlen(src);
	dst = (char *)malloc(srclen + 1) * (sizeof(char));
	if (dst == 0)
			return (0);
	i = 0;
	while (i < srclen)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

int main(void)
{
	char *dst;
	dst = strdup("hi~hahahaha");
	printf("%s\n", strdup("hi~hahahaha"));
	printf("%s\n", dst);
	return (0);
}
