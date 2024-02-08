/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <macarrei@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:21:32 by macarrei          #+#    #+#             */
/*   Updated: 2024/02/06 18:21:41 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*desti;
	const char	*source;
	const char	*tmp;

	desti = (const char *)dest;
	source = (const char *)src;
	tmp = 0;
	if (!desti && !source)
		return (0);
	while (source[i])
	{
		tmp[i] = source[i];
		i++;
	}
	i = -1;
	while (++i < n)
		dest[i] = tmp[i];
	return (dest);
}
