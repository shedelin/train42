#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while(b <= '9')
		{
			while(c <= '9')
			{
				while(d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
					}
					else
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					d++;
				}

				c++;
				d = '0';
			}
	
			b++;
			c = a;
			d = b + 1;
		}

		a++;
		b = a - 1;
		c = a;
		d = b + 1;
	}
}

int main()
{
	ft_print_comb2();

	return (0);
}
