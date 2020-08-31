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

char *ft_strcat(char *dest, char *src)
{
	int d;
	int s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;

	// dest[5] = src[0]       
	while (src[s] !='\0')
	{	
		dest[d] =  src[s];
		d++;
		s++;
	}
	// src[s] = '\0'  dest[d] = rien              d = 11
	dest[d] = '\0';

	return (dest);
}

int main(void)
{
	char dest[124] = "hello";
	char src[124] = " world";
	char test[];


	test = ft_strcat(dest, src);
//	ft_putstr(ft_strcat(dest, src));
	ft_putstr(test);
	return (0);
}



