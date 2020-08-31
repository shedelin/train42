#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	int x;

	x = 10;
	
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * - 1;
	}	

	if (nb < 10)
		ft_putchar('0' + nb);
//	if (nb > 10)
//	{
//		ft_putchar('0' + nb / 10);
//		ft_putchar('0' + nb % 10);
//	}
	if (nb >= 10)
	{
		while (nb / x != 0)
			x = x * 10;  
						// nb = 125     x = 1000
		x = x / 10;                     // x = 100    
		
		
		while (nb != 0)
		{
			ft_putchar('0' + nb / x);	// nb / x = 125 / 100 = 1
			nb = nb % x;
			x = x / 10;
		//	ft_putchar('0' + nb / x);	// nb / x = 25 / 10 = 2
		//	nb = nb % x;
		//	x = x / 10;
		//	ft_putchar('0' + nb / x);	// nb / x = 5 / 1
		}
	}

}

int main(void)
{
	ft_putnbr(-42);
	return (0);
}
