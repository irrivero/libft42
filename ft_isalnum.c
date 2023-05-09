/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:12:35 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:25:11 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (false);
	else
		return (true);
}

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (false);
	else
		return (true);
}

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
