void	ft_putstr(char *str);
void	*ft_memchr(const void *s, int c, unsigned int n);

int main()
{
	char *str = "Bonjour monsieur le programmeur !";
	int c = 'i';

	ft_putstr(ft_memchr(str, c, 15));
	return (0);
}
