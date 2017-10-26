#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, unsigned int n);

int	main()
{
	char *s1;
	char *s2;

	s1 = "Bonjour les amis d'ici";
	s2 = "Bonjour les amis";
	printf("%d\n", ft_memcmp(s1, s2, 20));
	printf("%d\n", memcmp(s1, s2, 20));
	return (0);
}
