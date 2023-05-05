/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:36:51 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/05 13:00:36 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p_char;

	if (s == NULL)
		return (NULL);
	p_char = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			p_char = (char *)s;
		s++;
	}
	return (p_char);
}
/*
int	main()
{
	char	str[] = "This is a sample string";
	char	*pch;
	pch = ft_strrchr(str, 's');
	printf("Last occurence of 's' found at %ld \n", pch - str + 1);
	return (0);
}*/
