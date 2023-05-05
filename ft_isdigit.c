/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:05:07 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/03 11:12:07 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (false);
	else
		return (true);
}
/*
int main()
{
    char ch;

    printf("Input a digit: ");
    scanf("%c", &ch);
    if (ft_isdigit(ch) == 0)
         printf("%c is not a digit", ch);
    else
         printf("%c is a digit", ch);

    return 0;
}*/
