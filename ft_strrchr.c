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
	size_t	len;

	len = ft_strlen(s);
	p_s = (char *)s;
	while (len)
	{
		if (p_s[len] == (char)c)
			return (p_s + len);
		len--;
	}
	return (p_s);
}
