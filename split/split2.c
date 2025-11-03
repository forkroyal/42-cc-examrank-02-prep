#include <stdlib.h>
#include <unistd.h>

void makestring(char *s);
char **spl(char *s);

void makestring(char *s)
{
	int i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}


char **spl(char *s)
{
	char **words;
	int i = 0;
	int i2 = 0;
	int i3 = 0;
	
	words = malloc(600 * sizeof(char *));
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\0')
		{
			i3 = 0;
			words[i2] = malloc(600 * sizeof(char));
			while (s[i] != ' ' && s[i] != '\0')
			{
				words[i2][i3] = s[i];
				i++;
				i3++;
			}
			words[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	words[i2] = 0;
	return (words);
}



int main(void)
{
	char *s = "hello my freund";

	char **spli = spl(s);

	int i = 0;

	while(spli[i])
	{
		makestring(spli[i]);
		write(1, "\n", 1);
		free(spli[i]);
		i++;
	}	
	free(spli);
	return 0;
}

