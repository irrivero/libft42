/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:54:36 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/11 14:39:12 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*retorno;
	
	retorno = (t_list *)malloc(sizeof(retorno));
	if (!retorno)
		return (NULL);
	retorno -> next = NULL;
	retorno -> content = content;
	return(retorno);
}