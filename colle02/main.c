void ft_print_tab(int **tab);
void ft_putchar(char c);
void ft_putstr(char *str);
int **ft_fill_tab(int **tab);
int **ft_create_tab(int **tab);
void ft_free_tab(int **tab);
void ft_test_fill(int **tab, char c1, char c2, int inc);

int ft_test_finish(int **tab)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (tab[j][i] == 0)
				return (1);
			i++;
		}
		j++;
	}

	return (0);
}

void ft_fill_cube(int **tab, char *str)
{
	int inc;
	int i;
	int j;

	inc = 0;
	i = 0;
	j = 8;
	while (inc < 8)
	{
		ft_test_fill(tab, str[i], str[j], inc);
		if (inc != 3)
		{
			i = i + 2;
			j = j + 2;
		}
		else
		{
			i = i + 10;
			j = j + 10;
		}
		inc++;
	}
}

int main(int argc, char **argv)
{
	int **tab;

	tab = ft_create_tab(tab);
	tab = ft_fill_tab(tab);
	if (argc <= 1)
	{
		ft_putstr("Veuillez ajouter un argument apres le a.out\n");
		return (0);
	}

	while (ft_test_finish(tab))
	{
		ft_fill_cube(tab, argv[1]);
	}

	ft_print_tab(tab);
	ft_free_tab(tab);
	return (0);
}