int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	else
		return (0);
}
