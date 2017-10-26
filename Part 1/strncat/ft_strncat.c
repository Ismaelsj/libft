char	*ft_strncat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (n-- && s2[j])
		s1[i++] = s2[j++];
	while (n-- && s1[i])
		s1[i++] = '\0';
	s1[i] = '\0';
	return (s1);
}
