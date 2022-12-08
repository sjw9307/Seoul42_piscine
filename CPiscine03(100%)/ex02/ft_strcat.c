/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:44:26 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/17 17:19:27 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	dlength;
	int	j;

	dlength = 0;
	j = 0;
	while (dest[dlength] != '\0')
		dlength++;
	while (src[j])
	{
		dest[dlength] = src[j];
		dlength++;
		j++;
	}
	dest[dlength] = '\0';
	return (dest);
}
