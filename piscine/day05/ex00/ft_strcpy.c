#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                ft_putchar(str[i]);
                i++;
        }
}


char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];		//	dest[0] = 'a';
		i++;				//	dest[0] = src[0];
						//	dest[1] = src[1];
		
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[25];
	char src[25] = "teste";

	ft_putstr(ft_strcpy(dest, src));
	return (0);
}
