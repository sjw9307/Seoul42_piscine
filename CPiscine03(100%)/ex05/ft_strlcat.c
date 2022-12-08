/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:50:37 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/17 17:19:45 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	end;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	end = destlen;
	while (destlen + i +1 < size && src[i] != '\0')
	{
		dest[end] = src[i];
		i++;
		end++;
	}
	dest[end] = '\0';
	if (destlen < size)
		return (destlen + srclen);
	else
		return (srclen + size);
}
