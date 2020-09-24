#include <stdlib.h>

int **ft_create_tab(int **tab)
{
	int i;

	i = 0;
	tab = malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		tab[i] = malloc(sizeof(int) * 4);
		i++;
	}

	return (tab);
}

void ft_free_tab(int **tab)
{
	int i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}

	free(tab);
}

int **ft_fill_tab(int **tab)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			tab[j][i] = 0;
			i++;
		}
		j++;
	}

	return (tab);
}
