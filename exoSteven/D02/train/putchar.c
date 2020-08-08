#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void add_number(int nb, int nb2)
{

	int result;

	result = nb + nb2;

	printf("%d\n", result);
}

void mult_number(int nb1, int nb) {
	int resultat;

	resultat = nb1 * nb;

	printf("%d\n", resultat);

}

void do_reduc(int prix)
{
	int prixFinale;

	prixFinale = prix * 0.8;

	printf("%d\n", prixFinale);
}

int main()
{
	int it;

	it = 0;
	while (it < 10)
	{ 
		if (it != 8)
		{
			printf("%d\n", it);
		}
		it++;
	}

	return 0;
}
