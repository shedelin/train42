#include <unistd.h>

void ft_putchar(char c) // pas de ; ce n'est que pour le prototypage
{
	write(1, &c, 1);
}

void ft_print_alphabet(void) // Je declare une fonction qui s'appelle ft_print_alphabet qui ne prend rien en parametre et ne renvoie rien
{
	int i; // je declare une variable i qui est un int
	char c;

	i = 0; // je donne la valeur 0 a la variable i
	c = 'a';
	while (i < 26) // je creer une boucle : tant que i est inferieur a 26 je fais ce qu'il y a dans la boucle
	{
		ft_putchar(c); // j'appelle la fonction ft_putchar en lui envoyant la valeur de la variable c
		c++; // ou c = c + 1; la valeur change a chaque tour de boucle
		i++; // j'incremente la variable i de 1 pour eviter les boucle infinis
	}	
}

void ft_print_alphabet_better(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

int main() // si une fonction retourne qqchose (int, char, char *...) ecrire le return en premier
{
	ft_print_alphabet(); // j'appel la fonction ft_print_alphabet et je ne lui envoie rien en parametre (parenthese obligatoire)

	return (0);
}
