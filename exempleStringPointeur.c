#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_test(char *str) // en faite ici, je recoit le pointeur sur la premiere lettre de la string
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	// str[2] = *str + 2
	
	ft_putchar('\n');
	// utiliser les pointeurs pour parcourir la string a un effet negatif qui est de perdre le debut de la string
	while(*str != '\0') // *str vaut 'h' car tu va chercher la variable que pointe str
	{
		ft_putchar(*str); // pareil ici, donc j'affiche 'h'
		str++; // cela fait avancer le pointeur au caractere suivant
	}
}

int main()
{
	char str[124] = "hello world";

	//ft_putchar(str[0]); // affiche la premiere lettre
	//ft_putchar(str[3]); // affiche la quatrieme lettre

	ft_test(str);
	return (0);
}
