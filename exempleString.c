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

int main()
{
	char str[124] = "coucou"; // String ou chaine de caractere ou phrase
				// \0 veut dire que c'est la fin de la string (end of string)
      //char *str;

	ft_put_first_two_str(str);
	ft_putstr("coucou");
	//ft_putstr(str);
	return (0);
}
