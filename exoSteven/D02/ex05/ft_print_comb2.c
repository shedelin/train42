#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_nbr(int nb1, int nb2)
{
	ft_putchar('0' + (nb1 / 10));
	ft_putchar('0' + (nb1 % 10));
	ft_putchar(' ');
	ft_putchar('0' + (nb2 / 10));
	ft_putchar('0' + (nb2 % 10));
	if (!(nb1 == 98 && nb2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while(nb1 < 99)
	{
		nb2 = nb1 + 1;
		while(nb2 < 100)
		{
			ft_print_nbr(nb1, nb2);
			nb2++;
		}

		nb1++;
	}
}

int main(void)
{
	ft_print_comb2();

	return (0);
}
