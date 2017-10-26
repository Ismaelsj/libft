void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char i;
	char *str;

	i = (char)c;
	str = (char *)s;
	while (n--)
	{
		if (*str == i)
			return (str);
		str++;
	}
	return (0);
}
