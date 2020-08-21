#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_recursive_power(int nb, int power)
{
	if ( power  == 1 )
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1)); // 2 * 4-1 ... 2, 5 -1
}

int main(void)
{
	int rst;

	rst = ft_recursive_power(2, 4);
	ft_putchar(rst);
	return (0);
}
