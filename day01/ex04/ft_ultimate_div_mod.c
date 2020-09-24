#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int save;

	save = *a; // save = 1667
	*a = *a / *b; // nb1(du main) = 1667 / 43
	*b = save % *b;

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

	ft_ultimate_div_mod(ptr1, ptr2);

	ft_putchar(nb1);
	ft_putchar(nb2);

	return (0);
}