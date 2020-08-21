#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	while (nb > 0)
	{
		result = result * nb; //
		nb--;
		//nb = 
	}
	return (result);
}

int main(void)
{
	int nb;

	nb = ft_iterative_factorial(5);
	ft_putchar(nb);
	return(0);
}
