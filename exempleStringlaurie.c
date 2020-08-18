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
		ft_putchar(str[i]); 	// str[0] est la premiere lettre de 
					// la string str ... puis str[1] est la seconde
		i++;
	}
}

int main()
{
	char str[7] = "coucou"; // String ou chaine de caractere ou phrase // il y a un \0 a la fin(implicite]
				// \0 veut dire que c'est la fin de la string (end of string)
      //char *str;
	ft_put_first_two_str(str);
	
	return (0);
}
