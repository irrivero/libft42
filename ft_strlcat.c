/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:32:08 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/12 13:13:05 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		d_l;
	int		s_l;
	size_t	count;
	int		s_in;

	d_l = ft_strlen(dst);
	s_l = ft_strlen(src);
	count = d_l;
	s_in = 0;
	while (*(src + s_in) != '\0')
	{
		*(dst + count) = *(src + s_in);
		count++;
		s_in++;
		if (count == size - 1)
			break ;
	}
	*(dst + count) = '\0';
	return (d_l + s_l);
}
/*
int main()
{
	char first[] = "This is ";
	char last[] = "a potentially long string";
	int r;
	int size = 64;
	char buffer[size];

	ft_strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if(r > size)
        puts("String truncated");
    else
        puts("String was fully copied");

    return (0);
}*/
