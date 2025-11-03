#include <unistd.h>
#include <stdlib.h>

void stringmaker(char *s);
char **splitt(char *s);

void stringmaker(char *s)
{
	int i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

char **splitt(char *s)
{
	char **words;
	int i = 0;
	int i2 = 0;
	int i3;

	words = malloc(600 * sizeof(char *));

	while (s[i])
	{
		if (s[i] != 32 && s[i] != '\0')
		{
			i3 = 0;
			words[i2] = malloc(600 * sizeof(char));
			while (s[i] != 32 && s[i] != '\0')
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

int main(int c, char **v)
{
	char *s = v[1];
	stringmaker(s);

	write(1, "\n", 1);

	char **spl = splitt(s);

	int i = 0;

	while (spl[i])
		i++;

	int j = 1;

	while (j < i)
	{
		stringmaker(spl[j]);
		write(1, " ", 1);
		free(spl[j]);
		j++;
	}
	stringmaker(spl[0]);
	free(spl[0]);
	free(spl);
	return 0;
}
