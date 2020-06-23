#include <unistd.h>

/*The function displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, it's prints ’N’ and if n is positive or null, it prints ’P’ */

void ft_putchar(int n)
{
	write(1,&n,1);
}

void ft_is_negative()
{
	int n;
	n =0;
	while (n>=-1 && n<=1)
	{
	if (n < 0)
	ft_putchar('N');

	else if (n == 0 || n =='\0' || n > 0)
	
		ft_putchar('P');
	break;
	}

}
