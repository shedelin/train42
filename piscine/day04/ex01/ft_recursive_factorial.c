#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
} 

int main(void)
{
	int rst;

	rst = ft_recursive_factorial(5);
	ft_putchar(rst);
	return (0);
}
