/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:32:29 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/17 15:11:27 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				findchar;

	p = (const unsigned char *)s;
	findchar = 0;
	while (findchar < n)
	{
		if (p[findchar] == (const unsigned char)c)
			return ((void *)(p + findchar));
		findchar++;
	}
	return (NULL);
}
/*
int	main() 
{
	const char str[] = "Hi,chosesom.ething";
	const char ch = '.';
	char *ret;
	
	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}*/
