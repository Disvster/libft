/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:55:02 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/15 18:24:36 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	cw;

	i = 0;
	cw = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			cw++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cw);
}

static size_t	count_letters(char const *s, char c, char **p_s)
{
	size_t	letters;

	letters = 0;
	while (*s != c && *s)
	{
		letters++;
		s++;
	}
	*p_s = (char *)s;
	return (letters);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;
	size_t	letters;

	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			letters = count_letters(s, c, (char **)&s);
			*split = ft_substr(s - letters, 0, letters);
			split++;
		}
	}
	*split = 0;
	return (split - words);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	**arr;
	int	i;
	
	i = 0;
	if (ac != 3)
	{
		printf("usage error, try -> %s <string> <string_separator>\n", av[0]);
		return (1);
	}
	arr = ft_split(av[1], av[2][0]);
	if (!arr)
	{
		printf("error >invalid string and/or separator<\n");
		return (1);
	}
	printf("arr -> ");
	while (arr[i])
	{
		if (arr[i + 1])
			printf("\"%s\" ", arr[i]);
		else if (!arr[i + 1])
			printf("\"%s\"\n", arr[i]);
		free (arr[i]);
		i++;
	}
	//free(*arr);
	//free(arr);
	return 0;
}*/
