#include <unistd.h>

/*The function prints digits, on a single line, in an ascending order */

void ft_putchar(char c)
{
	write (1,&c,1);
}

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
