/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:18:22 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/16 12:56:38 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	size_t	lens1;
	size_t	lens2;
	size_t	total;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		return ((char *)s2);
	if (s1 && !s2)
		return ((char *)s1);
	lens1 = ft_strlen((char *) s1);
	lens2 = ft_strlen(s2);
	total = lens1 + lens2 + 1;
	ns = malloc(sizeof(char) * total);
	if (!ns)
		return (0);
	ft_memmove(ns, s1, lens1);
	ft_memmove(ns + lens1, s2, lens2);
	ns[total - 1] = '\0';
	return (ns);
}
