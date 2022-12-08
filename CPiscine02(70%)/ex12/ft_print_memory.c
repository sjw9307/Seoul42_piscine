/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:18 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/13 17:32:53 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void print_c(char c)
{
	write(1, &c, 1);
}

void print_add(char *addr)
{
	int end_point;
	int cnt;
	unsigned long long word;
	char arr[16];

	end_point = 15;
	word = (unsigned long long) addr;
	
	while (end_point != -1)
	{
		if ((word % 16) >= 0 && (word % 16) <= 9)
			arr[end_point] = (word % 16) + '0';
		else if ((word % 16) >= 10 && (word % 16) <= 15)
			arr[end_point] = (word % 16) + 87;
		word = word / 16;
		end_point --;
	}
	write(1, arr, 16);
}

void print_hex(char *str, int i)
{
	int j;
	int front;
	int behind;
	char base[16] = "0123456789abcdef";
	
	j = 0;

	while (j < 16 && str[i])
	{
		if (j % 2 == 0)
			write(1," ",1);
		front = (str[i] / 16);
		print_c(base[front]);
		behind = (str[i] % 16);
		print_c(base[behind]);
		i ++;
		j ++;
	}
	if (str[i] == '\0')
		write(1, "00", 2);
}

void	putstr_print(char *str, int i)
{
	int count;
	int j;
	
	j = 0;
	count = 0;
	while (j < 16)
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			print_c(str[i]);
			count ++;
		}
		else
		{
			print_c('.');
			count ++;
		}
		i ++;
		j ++;
	}
	write (1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	char *word;
	int over;
	int j;
	
	over = (size % 16);
	i = 0;
	j = 0;
	word = (char *)addr;

	if (size == 0)
		return (0);
	else
	{
		word = word - 16;
		while (j < (size / 16))
		{
			word = word + 16;
			print_add(word);
			print_hex(word, i);
			write(1," ",1);
			putstr_print(word, i);
			j ++;
		}
	}
	if (over != 0)
	{
		word = word + 16;
		print_add(word);
		print_hex(word, i);
		write(1," ",1);
		putstr_print(word, i);
		over --;
	}
	return(word);
}

int main(void)
{
	char str12[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol.";
	ft_print_memory((void *)str12, sizeof(str12));
	return (0);
}
