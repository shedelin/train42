#include <unistd.h>
#include <stdlib.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

// ft_putstr est une fonction qui affiche une a une les lettres que compose une chaine de caractere (sans afficher '\0'
void ft_putstr(char *str) // je declare une fonction qui s'appel ft_putstr qui prend en parametre une string str et ne renvoie rien
{
	//ft_putchar(str[0]); affiche la premiere lettre
	//ft_putchar(str[3]); affiche la quatrieme lettre
	int i; // je creer une variable qui va me servir d'incrementeur (commence a 0 ici et monte de 1 dans la boucle)

	i = 0;
	while (str[i] != '\0') // je compare chacune des lettres avec '\0' qui veut dire que la string est termine
	{
		ft_putchar(str[i]); // j'affiche chaque lettre de la string
		i++;
	}
	//i vaut combien ici ? 3
}

// ft_strlen est une fonction qui compte le nombre de caractere dans une chaine de caractere (string) et renvoie la valeur
int ft_strlen(char *str) // je declare la fonction qui s'appel ft_strlen qui prend en parametre une string et renvoie un int
{
	int i;

	i = 0;
	while (str[i] != '\0') // je compare les chacunes des lettres de la string avec '\0' 
		i++; // i++ me permet d'incrementer la varibale et de compter le nombre de caractere de la string str

	return (i); // je retourne le nombre de caractere de la string
}

// ft_strcpy copy la string src dans la string dest et renvoie celle ci
char *ft_strcpy(char *dest, char *src) 	// je definie une fonction qui s'appel ft_strcpy, qui prend en parametre deux string dest et src
					// et renvoie une string (char *)
{ // src "cou\0" dest "cou"
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		// je met la premiere lettre de src dans dest : dest[0] = src[0];
		dest[i] = src[i];
		i++;
	}
	// actuellement => i = 3 src = "cou\0" dest = "cou" dest[3] = ''
	dest[i] = '\0';
	// maintenant => dest[3] = '\0' donc dest = "cou\0"

	return (dest);
}

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z')) ||
			(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}

	return (1);
}

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}

	return (1);
}

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 0 && str[i] <= 31)
			return (0);
		i++;
	}

	return (1);
}

char *ft_strupercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}

	return (str);
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			while ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= '0' && str[i] <= '9') &&
				str[i] != '\0')
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
				i++;
			}

		}
		if (str[i] != '\0')
			i++;
	}

	return (str);
}

int main()
{
	char str1[124] = "helloworld"; 	// je creer une string str1 qui peut contenir 124 lettres
	char str2[124];
						// et je donne a la string str1 la valeur "hello world !"
	int rst;

	ft_putstr(str1); // j'appelle la fonction ft_putstr et je lui envoie une string str1
	rst = ft_strlen(str1); // la variable rst stocke ce que renvoie la fonction ft_strlen
	ft_putchar(rst); // j'affiche la valeur ascii de la variable rst (ex: 42 vaut caractere '*')
	
	// ft_putstr(ft_strcpy(str2, str1)); // ft_putstr recupere ce que renvoie ft_strcpy(dest) et l'affiche

	int rst;

	rst = ft_str_is_alpha(""); // str[0] vaut '\0'
	if (rst == 1)
		ft_putchar('F');
	else
		ft_putchar('V');


	ft_putstr(ft_strupercase(str1));
	return (0);
}

// int main()
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux mot; cinquante+et+un";
// 	char *str1;

// 	str1 = malloc(sizeof(char) * 124);

// 	str1 = ft_strcapitalize(str);

// 	ft_putstr(str1);

// 	return (0);
//}