#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_sqrt(int nb)
{
	int sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)//1 * 1 / 2 * 2 / 3 * 3 / 4 * 4 / 5 * 5 exemple 17
		sqrt++;
	if (sqrt * sqrt == nb) // 25 est pas egale a 17
		return (sqrt);
	return (0);
}

int main()
{
	int result;

	result = ft_sqrt(1764);
	ft_putchar(result);
	return (0);
}
