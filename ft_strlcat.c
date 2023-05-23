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
	size_t	d_l;
	size_t	s_l;
	size_t	count;
	char	*s;
	size_t	i;

	d_l = ft_strlen(dst);
	s_l = ft_strlen(src);
	count = 0;
	i = 0;
	s = (char *)src;
	if (size > d_l)
		count = s_l + d_l;
	else
		count = s_l + size;
	while (s[i] && (d_l + 1) < size)
	{
		dst[d_l] = s[i];
		d_l++;
		i++;
	}
	dst[d_l] = '\0';
	return (count);
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
