#include <unistd.h>

char myputnr(int c);

char myputnr(int c)
{
	if (c > 9)
		myputnr(c / 10);
	char s;
	c %= 10;
	s = c + 48;
	write(1, &s, 1);
}

void mystring(char *s)
{
	int i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(void)
{
	int i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			mystring("fizzbuzz");
			i++;
		}
		else if (i % 3 == 0)
		{
			mystring("fizz");
			i++;
		}
		else if (i % 5 == 0)
		{
			mystring("buzz");
			i++;
		}
		else
		{
			myputnr(i++);
			write(1, "\n", 1);
		}
	}
	
		
}
