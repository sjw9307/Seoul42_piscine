/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:59:40 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/18 20:53:38 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (s[0] != '\0')
	{
		while (s[i])
		i++;
	}
	return (i);
}

int	check_base(char *s)
{
	int	j;
	int	i;

	i = 0;
	if (ft_strlen(s) < 2)
		return (0);
	while (s[i])
	{
		if ((s[i] >= 9 && s[i] <= 13)
			|| s[i] == 32 || s[i] == '-' || s[i] == '+')
			return (0);
		i++;
	}
	i = -1;
	while (s[++i])
	{
		j = i + 1;
		while (s[j])
		{
			if (s[i] == s[j])
				return (0);
			j++;
		}
	}
	return (1);
}

int	check_position(char *str, char s)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == s)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_size;

	i = 0;
	result = 0;
	sign = 1;
	base_size = ft_strlen(base);
	if (check_base(base) != 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
				i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (check_position(base, str[i]) != -1)
	{
		result = (result * base_size) + check_position(base, str[i]);
		i++;
	}
	return (result * sign);
}
