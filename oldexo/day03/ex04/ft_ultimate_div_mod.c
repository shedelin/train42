#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int save;

	save = *a; // save = 8	
	*a = save / *b; // *a = 8 / 3
	*b = save % *b; // *b = 8 % 3
}

int main(void)
{
	int nb1;
	int nb2;

	nb1 = 8;
	nb2 = 3;
	ft_ultimate_div_mod(&nb1, &nb2);

	printf("%d\n%d\n", nb1, nb2);

	return (0);
}
