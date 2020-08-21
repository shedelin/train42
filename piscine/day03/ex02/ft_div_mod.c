#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int *mod;
	int *div;
	int a;
	int b;
	int c;
	int d;

	a = 1660;
	b = 43;
	c = 90;
	d = 90;
	div = &c;
	mod = &d;

	ft_div_mod(a, b, div, mod);
	ft_putchar(c);
	ft_putchar(d);
	return (0);
}
