void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int save;
	int changeHappen;

	changeHappen = 1;
	while(changeHappen == 1)
	{
		changeHappen = 0;
		i = 0;
		while(i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				save = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = save;
				changeHappen = 1;
			}

			i++;
		}
	}
}

