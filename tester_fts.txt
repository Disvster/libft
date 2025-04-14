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

//       !  ft_memmove WIP  !
//          n = 5
//	        12345
//src  ->	       *12345___
//dest ->           *45___
//mmmove(dest)->*123*12345
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char	*og = "---12345";
	char	*str = og + 3;
	char	*t_av1 = str + 3;

	t_av1 += 3;
	if (atoi(av[1]) == 1)
		printf("OG memmove -> %s\n", memmove(t_av1, str, atoi(av[3])));
	else
		printf("ft_memmove -> %s\n", ft_memmove(t_av1, str, atoi(av[3])));
	return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	if (atoi(av[3]) == 1)
		printf("ft_strchr -> %s\n", ft_strrchr(av[1], av[2][0]));	
	else
		printf("OG strtchr -> %s\n", strrchr(av[1], av[2][0]));	
	return (0);
}*/
//           ft_memchr WIP
/*
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
}*/
