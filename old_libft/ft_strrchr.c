/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <macarrei@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:52:55 by macarrei          #+#    #+#             */
/*   Updated: 2024/02/07 16:54:12 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		lenstr;
	char	*str;

	str = (char *)s;
	lenstr = ft_strlen(s) + 1;
	if (!s)
		return (NULL);
	while (lenstr >= 0)
	{
		if ((int)str[lenstr] == c)
			return (str + lenstr);
		lenstr--;
	}
	return (str);
}
/*
int	main (int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strrchr(av[1], 'z'));
	return (0);
}*/
