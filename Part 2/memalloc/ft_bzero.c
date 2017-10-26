#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	if (n == 0)
		return;
	ptr = s;
	while (n--)
		*ptr++ = '\0';
}
