#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] != s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	ft_putchar(ft_strcmp("coucou", "couh"));
	return (0);
}