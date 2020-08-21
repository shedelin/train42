#include <unistd.h>

void ft_putchar(char c)
{
	wrtite(1, &c, 1);
}

void ft_strrev(char *str)
{
	int test;
	
	test = *str;
	*str = test;

}

int main()
{
	
	
	return(0);
}
