#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while(c >= 'b')
	{
		ft_putchar(c);
		c = c - 1;
		c--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return (0);
}
