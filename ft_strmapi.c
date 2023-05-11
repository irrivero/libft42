/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:26:26 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/11 11:59:03 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result; //donde almacenar el resultado
	unsigned int	i; // para iterar sobre los char en s
	
	i = 0;
	if (!s || !f) // checkear si son null
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1)); //asignar memoria
	if (!result)
		return (NULL);
	while (s[i]) // aplicar la funcion a cada caracter y almacenar result
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0'; //agregar caracter nulo al final
	return (result);
}