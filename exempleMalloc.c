#include <unistd.h>
#include <stdlib.h>

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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

// ft_strdup est une fonction qui recoit une string src, creer une string dest de la taille de src et copie src dans celle ci
char *ft_strdup(char *src)
{
	char *dest;
	int len;
	int i;

	len = ft_strlen(src); // je recupere dans la variable len la taille de la string
	dest = malloc(sizeof(char) * len + 1); // j'ai alloue la taille de la string src + 1 (pour \0) a la string dest
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	//free(dest); //free est une fonction qui libere la memoire alloue dynamiquement a la variable dest
	// apres free la variable n'existe plus
	return (dest);
}

int main()
{
	char src[124] = "coucou";
	// malloc est une fonction qui alloue la memoire a une variable
	ft_putstr(ft_strdup(src));
	return (0);
}
