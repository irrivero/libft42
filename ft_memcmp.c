/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:26:08 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:28:56 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	b;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	b = 0;
	while (b < n)
	{
		if (str1[b] != str2[b])
			return(str1[b] - str2[b]);
		b++;
	}	
	return(0);
}
/*
int	main() 
{
	char	str1[15];
	char	str2[15];
	int		ret;
	
	memcpy(str1, "ABCDEF", 6);
	memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2, 5);
	if(ret > 0) 
    	printf("str2 is less than str1\n");
	else if(ret < 0)
		printf("str1 is less than str2\n");
	else
   		printf("str1 is equal to str2\n");
	return(0);
}*/