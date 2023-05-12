/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:36:24 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/12 12:53:33 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char c, const char *s) //cuenta las substrings al dividir s por c
{
	int	mas;
	
	mas = 0;
	while(*s)
	{
		if (*s != c)
		{
			mas++;
			while(*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (mas);
}

static char	*copy(const char *s, char c) //copiar cada substring en su propia ubi de mem
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (*s && *s != c)
		word[i++] = *s++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		i;

	i = 0;
	words = count_words(c, s); // se recorre s y se cuenta cuantas veces c
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (words + 1)); // se reserva la mem para el array con todas las subcadenas y la cadena
	if (!split)
		return (NULL);
	while (i < words) // se recorre la ch buscando c, cada c, se crea una subcadena y se sigue buscando
	{
		while (*s == c)
			s++;
		split[i] = copy(s, c);
		if (!split[i])
		{
			while (i--)
				free(split[i]);
			free(split);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
		i++;
	}
	split[i] = NULL; // se agrega el null al final
	return (split); //se devuelve el pointer
}
/*
#include <stdio.h>

int main()
{
    char str[] = "Fernandito,kit,kat\nkitkat kitkat";
    char delim = ',';
    char **result = ft_split(str, delim);
    int i = 0;

    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return 0;
}*/