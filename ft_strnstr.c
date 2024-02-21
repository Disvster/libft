/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <macarrei@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:58:17 by macarrei          #+#    #+#             */
/*   Updated: 2024/02/08 12:58:41 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle)
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == needle[j] && hay[i + j])
			j++;
		if (!(needle[j]))
			return ((char *)hay + i);
		i++;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}*/
