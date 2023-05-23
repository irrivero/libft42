/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:31:52 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/16 12:53:56 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;
	t_list	*tem;

	t = *lst;
	if (!lst || !*lst || !del)
		return ;
	while (t)
	{
		tem = t->next;
		ft_lstdelone(t, del);
		t = tem;
	}
	*lst = NULL;
}
