#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swa(int *a, int *b)
{
	int lol;

	lol = *a;
	*a = *b;
	*b = lol;
}

int main(void)
{
	int lol;
	int *a;
	int *b;

	lol = 42;
	a = &lol;
	b = &

	ft_swap(a,b);
	ft_putchar(lol);
	return (0);
}
