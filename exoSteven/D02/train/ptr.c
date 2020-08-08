#include <stdio.h>
void ft_add(int *ptr)
{
	*ptr = 42; // je change la valeur que pointe ptr en 42
}

int main(void)
{
	int nb;
	int *ptr; // declare le pointeur ptr qui est un pointeur sur int

	nb = 5;
	ptr = &nb; // je donne la valeur de l'adresse de nb a ptr / je fais pointer ptr sur nb
	ft_add(*ptr);

	printf("%d\n", nb);

	return (0);
}
