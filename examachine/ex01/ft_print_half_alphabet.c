#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_half_alphabet(void)
{
	char c;

	c = 'a';
	while(c <= 'm')
	{
		ft_putchar(c);
		c++;
	}
}

int main()
{
	ft_print_half_alphabet();
	return (0);
}
