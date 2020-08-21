#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_sqrt(int nb)
{
	int racine;

	racine = 1;
	while (nb > 0)
	{
		racine = racine * racine;
		racine++;
	}

	if (racine * racine == nb)
		return (racine);
	if (nb < 0)
		return (0);
}

int main(void)
{
	int test;

	test = 1;
	ft_putchar(test);
	return (0);
}
