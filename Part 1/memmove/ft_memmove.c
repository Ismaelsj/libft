void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char *s1;
	char *cpy;

	s1 = (char *)dst;
	cpy = (char *)src;
	while (len--)
		*s1++ = *cpy++;
	return (dst);
}

