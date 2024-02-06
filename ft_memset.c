#include <libft.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = c;
	return (s);
}


#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char *s1 = "ola mundo";
	char *s2 = "ola mundo";
	int g = 'g';
	
	memset(s1, g, 3);
	printf("og memset: %s\n", s1);
	ft_memset(s2, g, 3);
	printf("og memset: %s\n", s2);
	/*
	if (ac == 3)
	{
		memset(s1, 'g', 3);
		printf("og memset: %s\n", s1);
		ft_memset(s2, 'g', 3);
		printf("og memset: %s\n", s2);
	}
	else
		printf("\n");*/
	return (0);
}
