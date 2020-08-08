#include <stdio.h>

int toto(int nb)
{
	if (nb == 1)                	// condition d'arret de la recursive
		return (nb);		// 5 + toto(4) => 5 + 4 + toto(3) => 5 + 4 + 3 + toto(2)
	else				// => 5 + 4 + 3 + 2 + toto(1) => 5 + 4 + 3 + 2 + 1
		return (nb + toto(nb - 1));
}

int iterative(int nb)
{
	int result;

	result = 0;
	while(nb > 0)
	{
		result = result + nb;
		nb--;
	}

	return (result);
}

int main(void)
{
	int nb;

	nb = toto(5);

	printf("%d\n", nb);

	return (0);
}
