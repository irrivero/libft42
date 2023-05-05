/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:43:13 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/05 12:36:06 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char) c)
	{
		if (! *s++)
			return (NULL);
	}
	return ((char *)s);
}
/*
int main ()
{
	char	str[] = "This is a sample string";
	char	*pch;
	printf("Looking for the 's' character in \"%s\"...\n", str);
	pch = ft_strchr(str,'s');
	while (pch != NULL)
	{
		printf("found at %ld\n", pch - str + 1);
		pch = ft_strchr(pch + 1,'s');
	}
	return (0);
}
*/
