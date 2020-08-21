#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_fibonacci(int index)
{
	if (index == 0)
		return (0);	// Fn = Fn -1 + Fn - 2
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}

int main(void)
{
	int rst;

	rst = ft_fibonacci(11);
	printf("%d\n", rst);
//	ft_putchar(rst);
	return (0);
}
