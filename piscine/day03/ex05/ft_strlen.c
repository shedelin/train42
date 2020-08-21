#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return(i);
}

int main(void)
{
	int result;
	char str[25] = "testesssssssssffff";

	result = ft_strlen(str);
	ft_putchar(result);
	return(0);
}
