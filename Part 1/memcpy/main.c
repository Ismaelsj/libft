#include <string.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	ft_putstr(char *str);

int	main()
{
	char *src = "Bonjour les amis ";
	char dest[50];

	ft_memcpy(dest, src, 13);
	memcpy(dest, src, 13);
	ft_putstr(dest);
	return (0);
}
