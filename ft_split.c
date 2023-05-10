/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:36:24 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/10 15:30:45 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delim(char c, const char *set) //comprueba si c esta en set
{
	while(*set)
	{
		if (c == *set++)
			return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	
}