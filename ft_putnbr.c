#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_number(int nb)
{
	int dizaine;

	dizaine = 1;
	while (nb / dizaine > 0)
		dizaine = dizaine * 10;

	dizaine = dizaine / 10;
	while (nb > 0)
	{
		ft_putchar('0' + (nb / dizaine));
		nb = nb - ((nb / dizaine) * dizaine);
		dizaine = dizaine / 10;
	}
}

void ft_putnbr(int nb)
{
	
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}

	if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
	else
		ft_print_number(nb);
}

int main()
{
	ft_putnbr(-2147483648);
	return (0);
}
