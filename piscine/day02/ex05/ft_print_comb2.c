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
	while (a <= '9')
	{	
		b = '1'- 1;
		while (b <= '8') 
		{
			c = '2'- 2; 
			while (c <= '9')
			{
				d = '3' - 2;
				while (d <= '9')
				{	
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					ft_putchar(',');
					ft_putchar(' ');
					d++;
				}	
				c++;
				
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
