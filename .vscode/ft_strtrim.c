/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:58:46 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/10 14:33:37 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set) //comprueba si c esta en set
{
	while(*set)
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
	if (!s1) //comprobacion de nulos
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (is_set(s1[inicio], set) == 0) //avanzar en s1 para ver si hay set al inicio
		inicio++;
	if (inicio == ft_strlen(s1))
	{
		if (!(ns = ft_strdup("")))
			return (NULL);
		else
			return (ns);
	}
	while (is_set(s1[len - 1], set) == 0) //avanzar s1 por el final eliminando set
		len--;
	ns = ft_substr(s1, inicio, len - inicio); // caracteres con s1 que empiece en inicio long len-inicio
	return (ns);
}