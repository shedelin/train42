#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_print_comb(void) {
	int c;
	int d;
	int u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while(d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				ft_putchar(c + '0');
				ft_putchar(d + '0');
				ft_putchar(u + '0');
				if (c != 7 || d != 8 || u != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				u++;

			}
			d++;
		}
		c++;
	}
}

int main(void) {
	ft_print_comb();
	return (0);
}
