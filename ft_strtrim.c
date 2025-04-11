/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:41:40 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/11 23:39:18 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//strim = (char *)malloc(sizeof(char) * (total_len + 1));
//
s1 -> "ola michel ola"
set-> "ola        ola"

while (*s1 == set && *s1){
	s1++;
	set++;
}
while ((*s1 != set && *s1)){
	s1++;
	set++;
	i++;
}
while (*s1 != set && *s1)

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	s1_len;
	size_t	set_len;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	if (ft_strncmp(s1, set, set_len) == 0)
		i += set_len;	
	while (s1[s1_len - 1] == set[set_len - 1])
	{
		s1_len--;
		set_len--;
	}
	strim = (char *)malloc(sizeof(char) * (s1_len - i + 1));
	while (i < s1_len)
		*strim = s1[i++];
	strim[i] = '\0';
	return (strim);
} 

#include <stdio.h>
int	main(int ac, char **av)
{
	char	*strim = ft_strtrim(av[1], av[2]);
	(void)ac;
	printf("s1 -> \"%s\"\nset -> \"%s\"", av[1], av[2]);
	printf("\nstrim -> \"%s\"\n", strim);
	return 0;
}
