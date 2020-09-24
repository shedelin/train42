#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int lol;
	int *kek;

	lol = 67;
	kek = &lol; // tu donne la valeur de l'adresse de lol au pointeur kek / tu fait pointer kek sur lol
	//ft_putchar(*kek); // ft_putchar(67) ou ft_putchar('C')
	// *kek tu va chercher la valeur de la variable que pointe kek

	printf("avant la fonction : *kek = %d\n", *kek);

	ft_ft(kek);
	printf("apres la fonction : *kek = %d\n", *kek);
	return (0);
}