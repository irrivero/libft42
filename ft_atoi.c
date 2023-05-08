/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:59:06 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/08 14:33:45 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (false);
	else
		return (true);
}

int	ft_atoi(const char *nptr)
{
	long	i;
	long	n;
	int		neg;

	i = 0;
	neg = 0;
	while (nptr[i] && (nptr[i] == 32 || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f'))
		i++;
	if (nptr[i] != '\0' && nptr[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	n = 0;
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
		n = (n * 10) + (nptr[i++] - '0');
	if (neg == 1)
		return(-n);
	return(n);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi(" +42"));
	printf("atoi: %d\n", atoi(" +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\n", ft_atoi("5"));
	printf("atoi: %d\n", atoi("5"));
	return 0;
}*/