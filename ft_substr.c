/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:04:22 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/12 13:14:05 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sbs;
	
	if (!s) //verificar si es nula
		return (NULL);
	if ((size_t)start > ft_strlen(s)) //verificar si start esta fuera de s
		return (ft_strdup("")); // devolver cadena vacia 
	sbs = malloc(sizeof(char) * (len + 1)); //asignar memoria a la nueva sbs
	i = 0;	
	while (i < len && *(s + start + i))
	{
		sbs[i] = *(s + start + i); // se copian los caracteres en la nueva sbs 
		i++;
	}
	sbs[i] = '\0'; // se agrega el nulo al final
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