#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int tab[4] = {3, 6, 2, 1};
	char str[124] = "coucou";
	//tab[0] vaut 3
	//tab[2] vaut 2
	//str[2] vaut 'u'
	int doubletab[4][3] = {
		{1, 2, 3},
		{2, 3, 5},
		{4, 6, 9},
		{5, 17, 5000}
	};
	// doubletab[3][1] vaut 17
	
	return (0);
}
