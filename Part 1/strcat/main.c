#include <stdio.h>

char	*ft_strcat(char *s1, char *s2);

int	main()
{
	char *s2;
	char s1[50] = "Bonjour ";

	s2 = "comment ca va ?";
	printf("%s\n", ft_strcat(s1, s2));
	return (0);
}
