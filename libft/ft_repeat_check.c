int		ft_repeat_check(char *str, char c, int j)
{
	int i;

	if (j == 0)
		i = 1;
	else
		i = 0;
	while (str[i] && i < j)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}