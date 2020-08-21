#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
        int lol;

        lol = *a;
        *a = *b;
        *b = lol;
}

int main(void)
{
        int test1;
	int test2;
        int *a;
        int *b;

        test1 = 67;
	test2 = 97;
        a = &test1;
        b = &test2;

        ft_swap(a,b);
	ft_putchar(test1);
        ft_putchar(test2);
        return (0);
}                    
