#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int x;

	x = 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}

	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		while (nb / x > 0)
			x = x * 10; // x = x * 10;
		x = x / 10;
		while (x != 0)
		{
			ft_putchar('0' + (nb / x));
			nb = nb % x;
			x = x / 10;
		}
	}
}

// void ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 		ft_putchar(str[i++]);	
// }

int ft_atoi(char *str)
{
	int rst;
	int i;
	int x;
	int dizaine;
	int isNegatif;

	i = 0;
	rst = 0;
	isNegatif = 1;
	// ici je passe les caractere whitespace qui sont au debut de la string
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;

	// ici on gere la partie des plus et moins
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			isNegatif = -1;
		i++;
	}

	// on gere la partie chiffre et lettre
	x = i;
	dizaine = 1;
	// ici on avance une premiere fois pour connaitre la taille du chiffre
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		dizaine = dizaine * 10;
		i++;
	}

	// dizaine = 10000
	dizaine = dizaine / 10;
	i = x; // je revien au premier chiffre trouve
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		rst = rst + (str[i] - '0') * dizaine;
		i++;
		dizaine = dizaine / 10;
	}
		
	rst = rst * isNegatif;

	return (rst);
}

int main() // "     +----++--+1234abc567"
{
	int rst;
	char str[] = "     +----++--+4234344abc567";

	rst = ft_atoi(str);
	ft_putnbr(rst);
	return (0);
}