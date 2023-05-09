/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:38:52 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:30:18 by irivero-         ###   ########.fr       */
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

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}
/*
int	main()
{
	char	s[50];

	printf("Input something: ");
    scanf("%s", s);
	ft_memset(s, '#', ft_strlen(s));
	printf("%s", s);
	return (0);
}*/
