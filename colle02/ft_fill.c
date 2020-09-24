void ft_fill(int **tab, int x, int y, int nb)
{
	tab[y][x] = nb;
}

void ft_test_fill(int **tab, char c1, char c2, int inc)
{
	if (c1 == '4' && c2 == '1')
	{
		if (inc < 4)
		{
			ft_fill(tab, inc, 0, 1);
			ft_fill(tab, inc, 1, 2);
			ft_fill(tab, inc, 2, 3);
			ft_fill(tab, inc, 3, 4);
		}
		else
		{
			ft_fill(tab, 0, (inc - 4), 1);
			ft_fill(tab, 1, (inc - 4), 2);
			ft_fill(tab, 2, (inc - 4), 3);
			ft_fill(tab, 3, (inc - 4), 4);
		}
	}
	else if (c1 == '1' && c2 == '4')
	{
		if (inc < 4)
		{
			ft_fill(tab, inc, 0, 4);
			ft_fill(tab, inc, 1, 3);
			ft_fill(tab, inc, 2, 2);
			ft_fill(tab, inc, 3, 1);
		}
		else
		{
			ft_fill(tab, 0, (inc - 4), 4);
			ft_fill(tab, 1, (inc - 4), 3);
			ft_fill(tab, 2, (inc - 4), 2);
			ft_fill(tab, 3, (inc - 4), 1);
		}
	}
}