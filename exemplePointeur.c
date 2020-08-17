#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_prout(int *ptr) 	// je declare une fonction qui s'appel ft_prout, 
				//elle prend en parametre un pointeur sur int
{				// et ne renvoie rien
	
	*ptr = *ptr + 2;	// a gauche du = *ptr : je vais chercher la variable que pointe ptr et 
				// je lui donne une nouvelle valeur (le resultat du gauche du =

				// a droite du = *ptr : je vais chercher la valeur de la variable que pointe ptr
	
	ft_putchar(*ptr);	// J'appel la fonction ft_putchar et je lui envoie la valeur de la variable 
				// que pointe ptr
}

int main()
{
	int nb; 	// je declare une variable qui s'appel nb qui est un nombre
	int *ptr; 	// je declare une variable qui s'appel ptr et qui est un pointeur sur int(un nombre entier)

	nb = 67; 	// je donne la valeur 67 a la variable nb // 67 c'est le caractere C(table Ascii)
	ptr = &nb; 	// je fais pointer le pointeur ptr sur la variable nb(qui est un int) 
			//(&nb est l'adresse dans la memoire de la variable nb)
	ft_prout(ptr); 	// j'apelle la fontion ft_prout et je lui envoie le pointeur ptr (pointeur sur un int)

	return (0);
}
