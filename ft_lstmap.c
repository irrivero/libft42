/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:49:26 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/16 10:06:27 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newl;
	t_list	*newn;
	
	if (!lst || !f)
		return (NULL);
	newl = NULL;
	while (lst)
	{
		newn = ft_lstnew(f(lst->content));
		if (!newn)
		{
			ft_lstclear(&newn, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, newn);
		lst = lst->next;
	}
	return (newl);
}