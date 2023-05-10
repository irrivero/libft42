/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:04:22 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/10 10:23:41 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

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
    return 0;
}*/