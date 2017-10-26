#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, unsigned int n);

int	main()
{
	char *str;
	char dst[20];

	str = "Bonjour";
	printf("%s\n", ft_strncpy(dst, str, 12));
	return (0);
}
