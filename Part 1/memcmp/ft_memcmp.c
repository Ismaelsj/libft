int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	char *c1;
	char *c2;

	c1 = (char *)s1;
	c2 = (char *)s2;
	while (n--)
	{
		if (*c1 == '\0')
			return (*c2);
		else if (*c2 == '\0')
			return (*c1);
		else if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
	}
	return (0);
}
