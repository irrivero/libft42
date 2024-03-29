/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:36:46 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/16 13:05:12 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sbyte;
	void	*p;

	sbyte = nmemb * size;
	p = malloc(sbyte);
	if (p != NULL)
	{
		ft_memset(p, 0, sbyte);
	}
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	i;
	int	n;
	int	*a;
	
	printf("Number of elements to be entered: ");
	scanf("%d", &n);
	a = (int *)ft_calloc(n, sizeof(int));
	printf("Enter %i numbers: \n", n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	printf("The numbers entered are: ");
	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	free(a);
	return(0);
}*/
