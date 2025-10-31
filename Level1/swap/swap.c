#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

int main()
{
	int a = 42;
	int b = 600;

	printf("%i\n", a);
	printf("%i\n", b);
	
	ft_swap(&a, &b);

	printf("%i\n", a);
	printf("%i\n", b);
}
