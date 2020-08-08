#include <unistd.h>

void ft_putchar(char c) // definition de la fonction ft_putchar qui prend un char C en argument et ne renvoie rien
{
	write(1, &c, 1);
}

int main() // fonction main ou commence le code
{
	char c; // definie une variable qui s'appelle c et qui est un carractere{char}
	int nb; // definie la variable qui s'appel nb et qui est un nombre{int}

	c = 'a'; // je donne la valeur caratere a a la variable c
	nb = 8; //je donne la valeur 8 a la variable nb
	ft_putchar(c); // appel de la fonction ft_putchar avec c en argument (c vaut le caractere a)
	return(0);
}
