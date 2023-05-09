/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:14:54 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:32:54 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
