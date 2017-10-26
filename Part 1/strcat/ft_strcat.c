char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		s1[i++] = s2[j++];
	return (s1);
}
