#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int stock;

	stock = *a;
	*a = stock / *b; //38
	*b = stock % *b; //
}

int main(void)
{
	int a;
	int b;
	int *c;
	int *d;

	a = 1660;
	b = 43;
	c = &a;
	d = &b;
	ft_ultimate_div_mod(c, d);
	ft_putchar(a);
	ft_putchar(b);
	

	return(0);
}
