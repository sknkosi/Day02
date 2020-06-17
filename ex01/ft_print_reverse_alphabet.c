/*The function prints alphabets in lowercase, on a single line, on a descending order, starting from the letter ’z’to 'a' */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
	{
		ft_putchar(z);
		z--;
	}
}
