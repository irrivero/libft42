/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:44:16 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:32:07 by irivero-         ###   ########.fr       */
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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;
	char	*b;
	
	i = 0;
	b = (char *)big;
	l_len = ft_strlen(little);
	if (l_len == 0 || big == little)
		return (b);
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (b[i + j] != '\0' && little[j] != '\0' && b[i + j] == little[j]
		&& i + j < len)
			j++;
		if (j == l_len)
			return(b + i);
		i++;
	}
	return(0);
}
/*
int	main()
{
	const char *largestring = "Hola que tal";
    const char *smallstring = "tal";
    char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 15);

	if (ptr != NULL)
	{
    	printf("The substring is %s\n", ptr);
	}
	else
	{
    	printf("The substring was not found\n");
	}
}*/