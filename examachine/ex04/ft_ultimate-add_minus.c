void ft_ultimate_add_minus(int *a, int *b)
{
	int stock1;
	int stock2;

	stock1 = *a;
	stock2 = *b;
	*a = stock1 + *b;
	*b = *a - stock2;

}

