#include <unistd.h>

/*The function displays different combinations of three different digits in an  ascending order.*/

void ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0' - 1;
	while (++n1 <= '9')
	{
		n2 = n1;
		while (++n2 <= '9')
		{
			n3 = n2;
			while (++n3 <= '9')
			{
				if (n1 != '0' || n2 != '1' || n3 != '2')
					ft_putchar(',');
				if (n1 != '0' || n2 != '1' || n3 != '2')
					ft_putchar(' ');
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
			}
		}
	}
	ft_putchar('\n');
}

int main()
{
 	ft_print_comb();
	return 0;
}
