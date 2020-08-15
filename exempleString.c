#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_put_first_two_str(char *str)
{
	int i;

	i = 0;
	while (i < 2)
	{
		ft_putchar(str[i]); // str[0] est la premiere lettre de 
			// la strint str ... puis str[1] est la seconde
		i++;
	}
}

int main()
{
	char c;
	char str[7]; // String ou chaine de caractere ou phrase
      //char *str;

	c = 'a';
	str = "coucou";
	ft_put_first_two_str(str);
	return (0);
}
