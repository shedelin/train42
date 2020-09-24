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

char *ft_strstr(char *str, char *to_find)
{
	int s;
	int t;
	int save;

	save = 0;
	s = 0;
	t = 0;
	while (str[s] != '\0')
	{
		save = s;
		while (to_find[t] == str[s])
		{
			s++;
			t++;
			if (to_find[t] == '\0')
				return (&str[save]);	
		}

		t = 0;
		s++;
	}

	return (0);
}

int main(void)
{
	char str[124] = "coucou les amis ama";
	char to_find[124] = "amis";

//	ft_strstr(str, to_find);
	ft_putstr(ft_strstr(str, to_find));
	return (0);
}



