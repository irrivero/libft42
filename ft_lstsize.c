/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:18:11 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/12 09:30:20 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i; //to count the length of the list

	i = 0;
	while (lst)
	{
		lst->next = lst; //everytime it counts the node adds 1 to i
		i++;
	}
	return (i);
}