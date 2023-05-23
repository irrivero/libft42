/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:36:24 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/16 13:13:31 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char c, const char *s)
{
	int	mas;

	mas = 0;
	while (*s)
	{
		if (*s != c)
		{
			mas++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (mas);
}

static char	*copy(const char *s, char c)
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
	words = count_words(c, s);
	split = malloc(sizeof(char *) * (words + 1));
	if (!s || !split)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			split[i++] = copy(s, c);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
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
