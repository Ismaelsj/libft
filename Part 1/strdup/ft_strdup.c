#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *cpy;
	int	i;
	int 	a;

	i = 0;
	while (s1[i])
		i++;
	cpy = malloc(sizeof(char) * i + 1);
	a = 0;
	while (a < i)
	{
		cpy[a] = s1[a];
		a++;
	}
	cpy[a] = '\0';
	free(cpy);
	return (cpy);
}
