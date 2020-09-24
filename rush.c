#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_corner(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
		ft_putchar('A');
	else if (i == x && j == 1)
		ft_putchar('C');
	else if (i == 1 && j == y)
		ft_putchar('C');
	else if (i == x && j == y)
		ft_putchar('A');
}

void rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y && x > 0 && y > 0)
	{
		i = 0;
		while (++i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == 1))
				ft_corner(i, j, x, y);
			else if ((i == 1 && j == y) || (i == x && j == y))
				ft_corner(i, j, x, y);
			else if (j == 1 || j == y)
				ft_putchar('B');
			else if (i == 1 || i == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		j++;
	}
}

int main()
{
	rush(5, 5);
	return (0);
}