#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_iterative_power(int nb, int power)
{
	int rst;
	int div;

	div = 0;
	rst = 1;	
	while (div < power)
	{
		rst = rst * nb;
		div++;
		
	}

	return (rst);
}

int main(void)
{
	int rst;

	rst = ft_iterative_power(3, 4);
	ft_putchar(rst);
	return (0);
}
