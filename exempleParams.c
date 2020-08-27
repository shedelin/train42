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
		ft_putchar(str[i++]);
}

int main(int argc, char **argv) // ./a.out coucou toto => argc vaut 2 argv[0] vaut "./a.out" argv[1] vaut "coucou" argv[2] vaut "toto"
{
	(void)argc;	
	ft_putstr(argv[0]);
	ft_putchar('\n');

	//int i;

	//i = 1;
	//while (i < argc)
	//{
	//	ft_putstr(argv[i]);
	//	ft_putchar('\n');
	//	i++;
	//}
	
	return (0);
}
