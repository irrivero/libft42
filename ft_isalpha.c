/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:19:16 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/03 11:04:15 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (false);
	else
		return (true);
}
/*
int main()
{
    char ch;

    printf("Input a character: ");
    scanf("%c", &ch);
    if (ft_isalpha(ch) == 0)
         printf("%c is not a character", ch);
    else
         printf("%c is a character", ch);

    return 0;
}*/
