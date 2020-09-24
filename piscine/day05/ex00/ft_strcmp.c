#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') 
		i++;
	//s1[i] = '3'  s2[i] = '\0'  i = 5
	return(s1[i] - s2[i]); // return ( '3' - '\0' )
}			

int main(void)
{
	char str1[124] = "testez";
	char str2[124] = "testeZ";
	int rst;
	
	rst = ft_strcmp(str1, str2);
	ft_putchar(rst);
	
	return(0);
}
