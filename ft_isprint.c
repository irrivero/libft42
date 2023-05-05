/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:35:54 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/03 12:07:18 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_isprint(int c)
{
	if (c < 32 || c > 127)
		return (false);
	else
		return (true);
}
/*
int main()
{
    char ch;

    printf("Input a printable character: ");
    scanf("%c", &ch);
    if (ft_isprint(ch) == 0)
         printf("%c is not a printable character", ch);
    else
         printf("%c is a printable character", ch);

    return 0;
}*/
