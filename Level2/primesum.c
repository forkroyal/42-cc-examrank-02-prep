/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <stdio.h>

int is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return 0;
	while (i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main()
{

	int n = 7;

	int sum = 0;

	//printf("%i\n", is_prime(7));
	while (n > 0)
	{
		if (is_prime(n))
			sum += n;
		n--;
	}
	printf("%i\n", sum);

}