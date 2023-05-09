/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:43:13 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:30:38 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
