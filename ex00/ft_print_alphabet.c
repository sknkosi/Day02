/* The function prints the alphabet in lowercase, on a single line, in an ascending order, starting from the letter ’a’ to 'z'*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int main()
{
	ft_print_alphabet();
	return (0);
}
