#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_add_minus(int nb1, int nb2, int *add, int *minus)
{
	*add = nb1 + nb2;
	*minus = nb1 - nb2;
}

int main()
{
	int nb1;
	int nb2;
	int *ptr1;
	int *ptr2;

	nb1 = 84;
	nb2 = 42;
	ptr1 = &nb1;
	ptr2 = &nb2;

	ft_add_minus(nb1, nb2, ptr1, ptr2);

	ft_putchar(nb1);
	ft_putchar(nb2);
	return (0);
}
