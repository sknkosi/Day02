/*The function prints a number entered as a parameter. The functionhas is able to display all possible values within an int type variable.*/ 

int ft_putchar(char c);

void ft_putnbr(int nb) 
{
   	char c; 
	
	if (nb < 0) 
	{ 
		nb = -nb; 
		ft_putchar('-');
   	} 
	if (nb < 10) 
		ft_putchar(nb + '0'); 
	else 
	{ 
		ft_putnbr(nb / 10); 
		ft_putnbr(nb % 10);
   	} 
}
