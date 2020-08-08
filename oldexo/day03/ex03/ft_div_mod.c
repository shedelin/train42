#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b; // toto = 5 / 2
	*mod = a % b; // mama = 5 % 2
}

int main(void)
{
	int toto;
	int mama;

	ft_div_mod(5, 2, &toto, &mama);

	printf("%d\n%d\n", toto, mama);

	return (0);
}

