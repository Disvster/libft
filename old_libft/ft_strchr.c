/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <macarrei@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:36:47 by macarrei          #+#    #+#             */
/*   Updated: 2024/02/07 16:37:09 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (str[i])
	{
		if ((int)str[i] == c)
			return (str + i);
		i++;
	}
	return (str + i);
}
/*
int	main (int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strchr(av[1], 'z'));
	return (0);
}*/
