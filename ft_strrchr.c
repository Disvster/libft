/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:56:33 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/09 20:05:13 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p_s;
	size_t	i;

	i = 0;
	p_s = (char *)s;
	while (1)
	{
		p_s = ft_strchr(p_s, c);
		if (*p_s == 0)
			return (p_s - i);
		i++;
	}
}
