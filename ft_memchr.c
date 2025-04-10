/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:02:29 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/10 15:43:01 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p_s;
	unsigned char p_c;

	p_s = (unsigned char *)s;
	p_c = (char)c;
	while (n)
	{
		if (*p_s == p_c)
			return(p_s);
		p_s++;
		n--;
	}
	return (NULL);
}
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	if (atoi(av[4]) == 1){
		void *temp = ft_memchr(av[1], av[2][0], atoi(av[3]));
		printf("ft_memchr -> %p\n", temp);	
	}
	else{
		void *temp = memchr(av[1], av[2][0], atoi(av[3]));
		printf("OG memchr -> %p\n", temp);	
	}
	return (0);
}
