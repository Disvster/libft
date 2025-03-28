/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <macarrei@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:11:56 by macarrei          #+#    #+#             */
/*   Updated: 2024/02/06 18:12:29 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*source;
	unsigned char	*desti;

	source = (unsigned char *)source;
	desti = (unsigned char *)dest;
	i = -1;
	if (!desti && !source)
		return (0);
	while (++i < n)
		desti[i] = source[i];
	return (dest);
}
