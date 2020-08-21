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
		return (nb * ft_recursive_power(nb, power - 1)); 	// f(2, 4) ; return (2 * f(2, 3))<---|
									// f(2, 3) : return (2 * f(2, 2))<--|
									// f(2, 2) : return (2 * f(2, 1))<-|
									// f(2, 1) : return (2)-----------|
									// return (2 * 2 * 2 * 2) 
}

int main(void)
{
	int rst;

	rst = ft_recursive_power(2, 4);
	ft_putchar(rst);
	return (0);
}
