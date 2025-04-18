/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:55:02 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/17 18:08:26 by manmaria         ###   ########.fr       */
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
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			cw++;
		i++;
	}
	return (cw);
}
/*
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			cw++;
		while (s[i] != c && s[i])
			i++;
			letter++
}
*/

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

static char	**free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**save;
	char	**split;
	size_t	words;
	size_t	letters;

	words = count_words(s, c);
	split = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!split)
		return (NULL);
	save = split;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			letters = count_letters(s, c, (char **)&s);
			*split = ft_substr(s - letters, 0, letters);
			if (!*split)
				return (free_split(save));
			split++;
		}
	}
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
