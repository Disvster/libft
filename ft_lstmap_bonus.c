/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:32:59 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/17 20:58:06 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	size_t	i;

	newlst = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!newlst)
		return (NULL);
	while (lst)
	{
		newlst->content = f(lst->content);
		if (!newlst->content)
		{
			ft_lstdelone(lst, del);
			return (NULL);
		}
		newlst->next = lst->next;
		lst = lst->next;
		newlst++;
	}
	newlst = NULL;
	return (newlst);
}
