#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b; // 1667 / 43 = 38
	*mod = a % b; // 1667 % 43 = 33
}

int main()
{
	int nb1;
	int nb2;
	int *ptr1;
	int *ptr2;

	nb1 = 1667;
	nb2 = 43;
	ptr1 = &nb1;
	ptr2 = &nb2;

	// nb1 = 1667 // nb2 = 43

	ft_div_mod(nb1, nb2, ptr1, ptr2);
	// nb1 = 38 // nb2 = 33
	ft_putchar(nb1);
	ft_putchar(nb2);
	return (0);
}
