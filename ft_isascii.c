/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:23:04 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/05 12:36:28 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (false);
	else
		return (true);
}
/*
int main()
{
    char ch;

    printf("Input an ASCII character: ");
    fgets(&ch, putstr(ch), stdin);
    if (ft_isascii(ch) == 0)
         printf("%c is not an ASCII character", ch);
    else
         printf("%c is an ASCII character", ch);

    return 0;
}*/
