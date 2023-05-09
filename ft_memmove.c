/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:54:32 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:29:56 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*ld;
	char		*ls;

	d = dest;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		ld = d + (n - 1);
		ls = (char *) src + (n - 1);
		while (n--)
			*ld-- = *ls--;
	}
	return (dest);
}
/*
int	main()
{

	char str[] = "memmove can be very useful......";
	ft_memmove (str+20,str+15,11);
	puts(str);
	return (0);
}*/
