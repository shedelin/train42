void ft_ultimate_div_mod(int *a, int *b)
{
	int save;

	save = *a;	
	*a = save / *b;
	*b = save % *b;
}

