#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b; // je vais chercher la variable que pointe div et je lui donne la valeur de a diviser par b
	*mod = a % b; // je vais chercher la variable que pointe mod et je lui donne la valeur du reste de la division entre a et b(%)
}

int main(void)
{
	int *mod; // je creer un pointeur sur int qui s'appelle mod
	int *div; // div et mod serve a pointer les variable dans lesquelles tu va sotcker les resultats
	int a; // a et b serve a stocker des valeurs afin d'etre envoyer dans la fonction
	int b;
	int c; // c sert a stocker le resultat de la division
	int d;

	a = 1660;
	b = 43;
	c = 90;
	d = 90;
	div = &c; // je fais pointer div sur la variable c (ou div est egale a l'adresse de c)
	mod = &d;

	ft_div_mod(a, b, div, mod);
	ft_putchar(c);
	ft_putchar(d);
	return (0);
}
