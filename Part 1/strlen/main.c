#include <stdio.h>

unsigned int	ft_strlen(const char *s);

int	main()
{
	char *s;

	s = "Bonjour";
	printf("%d\n", ft_strlen(s));
	return (0);
}
