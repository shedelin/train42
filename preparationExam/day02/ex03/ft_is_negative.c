#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n) // different des trois precedent, elle recoit un int n
{
	if (n < 0) // si n est inferieur a 0 {il est alors negatif) donc j'affiche N
		ft_putchar('N');
	else // sinon n est positif donc j'affiche P
		ft_putchar('P');	
}

int main()
{
	int nb;

	nb = 4;
	ft_is_negative(nb); // autre possibilite c'est d'ecrire ft_is_negative(4);
	return (0);
}
