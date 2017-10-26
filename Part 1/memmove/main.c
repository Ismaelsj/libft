#include <string.h>

void	*ft_memmove(void *dst, const void *src, unsigned int lenn);
void	ft_putstr(char *str);

int	main()
{
	char *src = "Bonjour les amis ";
	char dst[50];

	ft_memmove(dst, src, 15);
	//memmove(dst, src, 15);
	ft_putstr(dst);
	return (0);
}
