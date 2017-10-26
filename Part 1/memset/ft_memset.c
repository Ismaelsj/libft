void	*ft_memset(void *s, int c, unsigned int len)
{
	char	*ptr;
	int i;

	i = 0;
	if (len == 0)
		return (s);
	ptr = s;
	while (len-- && ptr[i] != '\0')
		ptr[i++] = (unsigned char)c;
	return (s);
}
