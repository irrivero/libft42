/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:12:35 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/12 13:10:59 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (true);
	else
		return (false);
}
/*
int main()
{
    char ch;

    printf("Input some alphanumeric value: ");
    scanf("%c", &ch);
    if (ft_isalnum(ch) == 0)
         printf("%c is not alphanumeric", ch);
    else
         printf("%c is alphanumeric", ch);

    return 0;
}*/
