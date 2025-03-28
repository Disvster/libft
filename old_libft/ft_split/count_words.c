/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <macarrei@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:06:30 by macarrei          #+#    #+#             */
/*   Updated: 2024/02/05 16:06:34 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_words(char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
			count += 1;
		}
		i++;
	}
	return (count);
}
/*
int	main(int ac, char **av)
{
	if(ac == 3)
		printf("%d\n", count_words(av[1], av[2][0]));
	else
		printf("\n");
}*/
