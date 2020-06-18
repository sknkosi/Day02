/* The function prints different combination of two digits between 00 and 99, listed in an  ascending order*/

int		ft_putchar(char c);
void	xyz_putchar(char x, char y, char z);

void	ft_print_comb2(void)
{
	char d;
	char b;
	char a;
	char e;

	d = '0';
	while (d <= '9')
	{
		b = d + 1;
		while (b <= '8')
		{
			a = b + 1;
			xyz_putchar(d, b, ' ');
			while (a <= '9')
			{
				e = a + 1;
				while (e <= '9')
				{
					xyz_putchar(a, e, ',');
					e++;
				}
				a++;
			}
			b++;
		}
		d++;
	}
}

void xyz_putchar(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}
