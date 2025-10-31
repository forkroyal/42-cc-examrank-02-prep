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
		char tow;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] + 1 > 'z')
			{
				tow = s[i]-1;
				write(1, &tow, 1);
			}
			else
			{
				tow = s[i]+1;
				write(1, &tow, 1);
			}
			i++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{

			if (s[i] + 1 > 'Z')
			{
				tow = s[i]-1;
				write(1, &tow, 1);
			}
			else
			{
				tow = s[i]+1;
				write(1, &tow, 1);
			}
			i++;
		}
		else
			write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
}
