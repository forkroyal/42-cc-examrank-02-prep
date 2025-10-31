#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = 0;

	char *s = av[1];

	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			int j = 0;
			while (j < s[i] - 64)
			{	
				write(1, &s[i], 1);
				j++;
			}
			i++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			
			int j = 0;
			while (j < s[i] - 96)
			{	
				write(1, &s[i], 1);
				j++;
			}
			i++;
		}
		else
			write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
}
