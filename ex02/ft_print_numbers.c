/*The function prints digits, on a single line, in an ascending order */

int	ft_putchar(char c);

void ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
