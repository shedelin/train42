#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

// coder de maniere iterative
int ft_iterative_add(int nb) // je definie une fonction qui s'appel ft_iterative_add qui prend un int nb en parametre et renvoi un int
{
	int result;

	result = 0;
	while(nb > 0)
	{
		result = result + nb; // a la fin result = 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1
		nb--;
	}

	return (result);
}

// coder de maniere recursive
int ft_recursive_add(int nb)
{
	if (nb == 1)
		return (1); // condition d'arret de la recursive car il ne rappel pas la fonction ; on deplis les 9 stacks
	else
		return (nb + ft_recursive_add(nb - 1)); // return (9 +  ... return (8 + ... return (1)
							// a la fin, toutes stacks se deplis et cela donne 
							// return ( 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1)
	
}

int main()
{
	int result1;
	int result2;

	result1 = ft_iterative_add(9); // result1 recupere la valeur renvoyer par le return de la fonction ft_iterative_add
	result2 = ft_recursive_add(9);

	ft_putchar(result1);
	ft_putchar(result2);

	return (0);
}
