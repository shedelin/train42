#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}



int main()
{
	int nb;
	int *ptr;

	nb = 9;
	ptr = &nb;
	ft_print(ptr);
	return (0);
}
