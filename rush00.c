/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00-b.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jevan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/28 16:58:09 by jevan-de      #+#    #+#                 */
/*   Updated: 2018/10/28 16:59:20 by jevan-de      ########   odam.nl         */
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
		print_line(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			print_line(x, '|', ' ', '|');
			y--;
		}
		if (y == 1)
			print_line(x, 'o', '-', 'o');
	}
	return ;
}
