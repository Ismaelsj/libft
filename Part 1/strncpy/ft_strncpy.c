char	*ft_strncpy(char *dst, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i++ < n)
		dst[i] ='\0';
	dst[i] = '\0';
	return (dst);
}
