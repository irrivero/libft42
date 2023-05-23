/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:04:22 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/17 12:26:32 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sbs;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	sbs = (char *)malloc(sizeof(char) * (len + 1));
	if (!sbs)
		return (NULL);
	ft_strlcpy(sbs, s + start, len + 1);
	return (sbs);
}
/*
int main()
{
    char source[] = "fernanditokitkat";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_substr(source, 0, 10);
 
    printf("%s\n", target);
	free(target);
    return 0;
}*/
