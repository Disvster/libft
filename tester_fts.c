/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_fts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:20:03 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/09 13:22:53 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memset:
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char *av[])
{
	int tab[atoi(av[2])];
	int	tab2[atoi(av[2])];

	(void)ac;
	memset(tab, atoi(av[1]), sizeof(tab));
	printf("OG memset: ");
	for (int i = 0; i < atoi(av[2]); i++)
		printf("%d ", tab[i]);
	printf("\nft_memset: ");
	ft_memset(tab2, atoi(av[1]), sizeof(tab2));
	for (int i = 0; i < atoi(av[2]); i++)
		printf("%d ", tab2[i]);
	printf("\n");
	return 0;
}*/
