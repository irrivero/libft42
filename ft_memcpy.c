/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:39:14 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:29:37 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	s[50];
	char	d[50];

	printf("Input something: ");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = '\0'; //elimina el salto de linea del final
	ft_memcpy(d, s, strlen(s) + 1);
	printf("Copied string is: %s\n", d);
	return (0);
}*/
