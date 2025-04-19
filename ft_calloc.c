/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:18:43 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/10 19:49:01 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	mult;

	mult = nmemb * size;
	arr = (char *)malloc(mult);
	if (!arr)
		return (NULL);
	ft_bzero(arr, mult);
	return (arr);
}
