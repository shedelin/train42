#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int stock; // sauvegarde de la valeur pointer par a afin de pouvoir faire le second calcul

	stock = *a; // stock = 1660 // le pointeur a de la fonction pointe sur la variable a du main
	*a = stock / *b; // a(du main) = 1660 / 43 = 38
	*b = stock % *b; // b(du main) = 1660 % 43
}

int main(void)
{
	int a;
	int b;
	int *c; // creer un pointeur sur un int(int *) qui s'appelle c / a pointer sur a et a etre envoyer dans la fonction
	int *d;

	a = 1660;
	b = 43;
	c = &a; // je fais pointer c sur la variable a
	d = &b;
	ft_ultimate_div_mod(c, d);
	ft_putchar(a);
	ft_putchar(b);
	

	return(0);
}
