/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:14:54 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/04 11:48:48 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
int	main()
{
	char str [100];
	int	i = 0;

	printf("Write something please: ");
	fgets(str, sizeof(str), stdin);
	printf("This is your something: ");
	while (str[i])
	{
		putchar(ft_toupper(str[i]));
		i++;
	}
	return (0);
}
*/
