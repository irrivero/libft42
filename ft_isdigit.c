/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:05:07 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:27:39 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
