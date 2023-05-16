/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:18:22 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/16 09:26:05 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	size_t	lens1;
	size_t	lens2;
	size_t	total;

	if (!s1 && !s2) //se comprueba que char es nula y se devuelve la que no es
		return (NULL);
	if (!s1 && s2)
		return ((char *)s2);
	if (s1 && !s2)
		return ((char *)s1);
	lens1 = ft_strlen((char *) s1); //se calcula la long de las cadenas
	lens2 = ft_strlen(s2);
	total = lens1 + lens2 + 1;
	ns = malloc(sizeof(char) * total); //se reserva la memoria para la nueva char
	if (!ns) // si la mem falla se devuelve null
		return (0);
	ft_memmove(ns, s1, lens1); //se copia s1 en ns
	ft_memmove(ns + lens1, s2, lens2); // se copia s2 en ns+lens1, justo despues de s1
	ns[total - 1] = '\0';
	return (ns);
}