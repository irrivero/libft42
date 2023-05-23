/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:35:54 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:28:09 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
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
