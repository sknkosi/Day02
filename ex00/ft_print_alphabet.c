/* The function prints the alphabet in lowercase, on a single line, in anascending order, starting from the letter ’a’.*/

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}


