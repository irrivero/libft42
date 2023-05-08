/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:32:29 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/08 10:24:19 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*findChar;
	
	p = (unsigned char*)s;
	findChar = NULL;
	while ((s != NULL) && (n > 0))
	{
		if (*p != (unsigned char)c)
		{
			p++;
		}
		else
		{
			findChar = p;
			break;
		}
	}
	return(findChar);
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