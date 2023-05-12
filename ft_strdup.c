/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:09:13 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/12 13:12:34 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *d;
	size_t	len;

	len = ft_strlen(s) + 1;
	d = malloc(len);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, len);
	return (d);
}
/*
int main()
{
    char source[] = "fernanditokitkat";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source);
 
    printf("%s\n", target);
	free(target);
    return 0;
}*/