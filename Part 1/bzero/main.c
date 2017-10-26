#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);
void	ft_bzero(void *s, size_t n);

int	main()
{
	char *str;

	str = "petit con comment ca va ?\n";
	ft_putstr(str);
	bzero(str, 9);
	printf("%s\n", str);
	return (0);
}
