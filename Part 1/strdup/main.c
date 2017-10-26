#include <stdio.h>

char	*ft_strdup(const char *s1);

int	main()
{
	char *s1;

	s1 = "Hello !";
	printf("%s\n", ft_strdup(s1));
	return (0);
}
