/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:49:13 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/04 11:52:49 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
int main()
{
    char str [100];
    int i = 0;

    printf("Write something please: ");
    fgets(str, sizeof(str), stdin);
    printf("This is your something: ");
    while (str[i])
    {
        putchar(ft_tolower(str[i]));
        i++;
    }
    return (0);
}
*/
