int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>

int main()
{
	printf("%i\n", ft_strlen("hello"));
}
