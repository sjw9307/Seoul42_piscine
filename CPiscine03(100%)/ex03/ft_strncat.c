/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:00:02 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/17 17:19:31 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dlen;
	unsigned int	i;

	dlen = 0;
	i = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[i] && i < nb)
	{
		dest[dlen] = src[i];
		dlen ++;
		i++;
	}
	dest[dlen] = '\0';
	return (dest);
}
