/*The function displays different combinations of three different digits in an  ascending order.*/

int	ft_putchar(char c);
void xyz_putchar(char x, char y, char z);

void	ft_print_comb(void)
{
	char d;
	char b;
	char a;

	d = '0';
	while (d <= '7')
	{
		b = d + 1;
		while (i <= '8')
		{
			a = b + 1;
			while (a <= '9')
			{
				xyz_putchar(d, b, a);
				if (d != '7' || b != '8' || a != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a++;
			}
			b++;
		}
		d++;
	}
}

void	xyz_putchar(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}
