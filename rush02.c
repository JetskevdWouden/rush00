/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jevan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/28 15:54:23 by jevan-de      #+#    #+#                 */
/*   Updated: 2018/10/28 16:51:22 by jevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	print_line(int x, char start, char middle, char end)
{
	ft_putchar(start);
	while ((x - 1) > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if ((x - 1) == 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			print_line(x, 'B', ' ', 'B');
			y--;
		}
		if (y == 1)
			print_line(x, 'C', 'B', 'C');
	}
	return ;
}
