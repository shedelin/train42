#include <unitstd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr) // nbr est ptr du main (c'est le meme pointeur) la fonction le renome juste
{
	*nbr = 42; // *nbr je vais chercher la variable que pointe nb et je lui donne la valeur 42
}

int main()
{
	int nb;
	int *ptr;

	nb = 21;
	ptr = &nb; // je fait pointer ptr sur la variable nb

	// *ptr : je vais chercher la variable que pointe ptr (nb) et je recupere la valeur de la variable : 21 
	ft_ft(ptr);
	return (0);
}