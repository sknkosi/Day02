/*The function displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, it's prints ’N’ and if n is positive or null, it prints ’P’ */

int ft_putchar(char c);

void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
