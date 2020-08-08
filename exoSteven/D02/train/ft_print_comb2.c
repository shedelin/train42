#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_print_comb2(void) {
	int i;
	int k;

	i = 0;
	while (i < 100)
	{
		k = i + 1;
		while (k < 100) {
			ft_putcha'0' + i / 10);
			ft_putchar('0' + i % 10);
			ft_putchar(' ');
			ft_putchar('0' + k / 10);
			ft_putchar('0' + k % 10);
			if (i < 98 || k < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}

			k++;
		}

		i++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
