int	ft_atoi(char *str)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == 45)
	{
		j = 1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	x = 0;
	while (str[i] >= 48 && str[i] <= 57)
		x = x * 10 + (str[i++] - 48);
	if (j == 1)
		x = -x;
	return (x);
}
