/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:58:46 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/17 14:58:35 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (0);
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	inicio;
	char	*ns;

	len = ft_strlen(s1);
	inicio = 0;
	ns = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (is_set(s1[inicio], set) == 0)
		inicio++;
	if (inicio == ft_strlen(s1))
	{
		if (!ns)
			return (ft_strdup(""));
		else
			return (ns);
	}
	while (is_set(s1[len - 1], set) == 0)
		len--;
	ns = ft_substr(s1, inicio, len - inicio);
	return (ns);
}
