#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_tab(int **tab)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			ft_putchar('0' + tab[j][i]);
			if (i != 3)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
