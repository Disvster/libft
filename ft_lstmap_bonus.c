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

static void	memorydel(t_list *mapi, t_list *nodi, void (*del)(void *))
{
	del(nodi);
	ft_lstclear(&mapi, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapi;
	t_list	*nodi;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	mapi = NULL;
	while (lst)
	{
		nodi = f(lst->content);
		if (!nodi)
		{
			ft_lstclear(&mapi, del);
			return (NULL);
		}
		tmp = ft_lstnew(nodi);
		if (!tmp)
		{
			memorydel(mapi, nodi, del);
			return (NULL);
		}
		ft_lstadd_back(&mapi, tmp);
		lst = lst->next;
	}
	return (mapi);
}
