#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
	int save; // je creer une variable pour sauver la valeur de a

	save = *a; // save = nb1(du main)
	*a = *b; // nb1(du main) = nb2(du main) // nb1 = 43
	*b = save; // nb2(du main) = save	// nb2 = 42
}

int main()
{
	int nb1;
	int nb2;
	int *ptr1;
	int *ptr2;

	nb1 = 42;
	nb2 = 43;
	ptr1 = &nb1;
	ptr2 = &nb2;

	ft_swap(ptr1, ptr2);
	ft_putchar(nb1);
	ft_putchar(nb2);
	
	return (0);
}