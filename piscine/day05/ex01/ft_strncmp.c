#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}

int ft_strncmp(char *s1, char *s2, unsigned int n) // unsigned int est un int qui ne peut pas etre negatif donc n > 0 obligatoire
{
        int i;

        i = 0;
	if (n == 0)
		return (0);
        while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)    // teste avec 6 on  doit retourne 3      // en dessous de 6 retourn 0
                i++;

        return(s1[i] - s2[i]);
}

int main(void)
{
        char str1[124] = "teste3";
        char str2[124] = "teste";
        int rst;
	unsigned int n;

	n = 6;
        rst = ft_strncmp(str1, str2, n);
        ft_putchar(rst);

        return(0);
}
