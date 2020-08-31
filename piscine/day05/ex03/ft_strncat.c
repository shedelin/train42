#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int d;
	int s;

	
	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return(dest);
}

int main(void)
{
	unsigned int nb;
	char dest[124] = "hello";
	char src[124] = " world";

	nb = 3;

	ft_putstr(ft_strncat(dest, src, nb));
	return (0);
}
