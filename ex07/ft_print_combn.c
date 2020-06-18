/*The function prints all different combinations of n numbers in an ascending order.*/

int ft_putchar(char c);

static void ft_printcom(int *arr, int col, int n) 
{ 
	int i; 
	while (col) 
	{ 
		while (arr == (9 + col - (n - 1)) && col >= 0) 
			col -= 1; 

		if (col < 0) 
			break ; arr += 1; 
		i = (col + 1) - 1;
	   	
		while (i++ < n) 
			arr[i] = arr[i - 1] + 1; 
		
		col = n - 1; 
		ft_putchar(','); 
		ft_putchar(' '); 
		i = 0; 
		
		while (i < n) 
			ft_putchar(arr[i++] + '0'); 
	} 
} 

void ft_print_combn(int n) 
{ 
	int arr[n]; 
	int i; 
	int col; 
	col = n - 1; 
	
	if (n > 10) 
		return ; i = -1; 
	
	while (i++ < n) 
		arr[i] = i; 
	i = 0; 
	
	while (i < n) 
		ft_putchar(arr[i++] + '0'); 
	ft_printcom(arr, col, n); 
	ft_putchar('\n'); 
}
