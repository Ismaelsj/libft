#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t len);
void	ft_putstr(char *str);

int	main()
{
	char *str;
	str = "je ne dis pas petit con";
	printf("%s\n", str);
	memset(str, '-', 2);
	printf("%s\n", str);
	return (0);
}
