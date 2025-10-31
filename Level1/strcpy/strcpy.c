#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2);

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\n';
	return (s1);
}

int main(void)
{
	char *src = "hello";
	char dest[42] = "bye";

	printf("%s\n", dest);

	ft_strcpy(dest, src);

	printf("%s\n", dest);
}
