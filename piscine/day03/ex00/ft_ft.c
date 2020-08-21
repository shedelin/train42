#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int lol;
	int *nbr;

	lol = 67;
	nbr = &lol;
//	ft_ft(nbr); 
	ft_putchar(*nbr); 
	return (0);
}
