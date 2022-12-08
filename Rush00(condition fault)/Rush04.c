/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:01:08 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/02 18:51:34 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char C);

void	rush(int row, int col)
{
	int	width;
	int	height;

	width = 0;
	height = 0;
	while (height < col)
	{
		while (width < row)
		{
			if ((width == 0 && height == 0) || (width == row - 1 && height == col -1 && height != 0 && width != 0))
			{
				ft_putchar('A');
			}

			else if ((width == row -1 && height == 0) || (width == 0 && height == col -1 ) || (width == row && col == 0 ))
			{
				ft_putchar('C');
			}

			else if( (width == 0 && height != col-1) || (height == 0 && width != row-1) || (height == col -1 && width != 0) || (width == row -1 && height != 0) ) 
			{
				ft_putchar('B');
			}

			else ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		width = 0;
		height++;
	}
}
