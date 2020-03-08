int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;

	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int d;
	int len;
	char save;

	i = 0;
	len = ft_strlen(str);
	d = len - 1;
	while(i < (len / 2))
	{
		save = str[d];
		str[d] = str[i];
		str[i] = save;
		i++;
		d--;
	}

	return (str);
}
