#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr) // je declare une fonction qui s'appelle ft_ft qui prend en parametre un pointeur sur int et ne renvoie rien
{
	*nbr = 42; // a gauche du egale : je remonte le pointeur nbr(ptr) et je change la valeur de la variable pointer
      //*nbr = *nbr + 3// a droite du egale : je remonte le pointeur nbr(ptr) et je recupere la valeur de la variable pointer(45)
}

int main()
{
	int nb; // je creer une variable qui s'appelle nb et est un int (je la creer pour pouvoir faire pointer ptr dessus)
	int *ptr; // je creer une varaible qui s'appelle ptr et qui est un pointeur sur un int

	nb = 45; // je donne la valeur 45 a ma variable nb
	ptr = &nb; // Je fais pointer ptr sur ma variable nb (ou ptr est egale a l'adresse(&) de nb)
	ft_ft(ptr); // j'appelle ma fonction ft_ft et je lui envoie un pointeur sur int ptr (qui pointe sur nb)
	ft_putchar(nb);
	return (0);
}
