#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ultimate_add_minus(int *a, int *b)
{
	int stock1;
	int stock2;

	stock1 = *a; // stock1 = 84
	stock2 = *b; // stock2 = 42
	*a = stock1 + *b; // nb1 = 84 + 42  = 126 ~
	*b = *a - stock2; // nb2 = 126 - 42 = 84 T

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
	
	ft_ultimate_add_minus(ptr1, ptr2);

	ft_putchar(nb1);
	ft_putchar(nb2);
	return (0);
}
