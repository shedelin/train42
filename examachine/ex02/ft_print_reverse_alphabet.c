void ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while(c >= 'b')
	{
		ft_putchar(c);
		c = c - 1;
		c--;
	}
}

