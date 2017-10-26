#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, char *s2, unsigned int n);

int	main()
{
	char *s2;
	char s1[50] = "Bonjour ";

	s2 = "comment ca va ?";
	//printf("%s\n", ft_strncat(s1, s2, 10));
	printf("%s\n", strncat(s1, s2, 10));
	return (0);
}
