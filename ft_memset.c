/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <macarrei@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:19:21 by macarrei          #+#    #+#             */
/*   Updated: 2024/02/06 17:19:23 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char s1[50] = "ola mundo";
	char s2[50] = "ola mundo";
	//int g = 'g';
	
	memset(s1, '$', 3);
	printf("og memset: %s\n", s1);
	ft_memset(s2, '$', 3);
	printf("ft_memset: %s\n", s2);
	
	if (ac == 3)
	{
		memset(s1, 'g', 3);
		printf("og memset: %s\n", s1);
		ft_memset(s2, 'g', 3);
		printf("og memset: %s\n", s2);
	}
	else
		printf("\n");
	return (0);
}*/
