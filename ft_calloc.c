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
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc(size * nmemb);
	tmp = NULL;
	if (((size * nmemb) > (size_t)-1) || !nmemb || !size)
		return (tmp);
	while (i < nmemb)
		tmp[i++] = 0;
	return (tmp);
}
