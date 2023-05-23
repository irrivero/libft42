/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:51:16 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/09 09:31:40 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	a;
	unsigned int	diff;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a] && (a < n - 1))
		a++;
	diff = (unsigned char)s1[a] - (unsigned char)s2[a];
	return (diff);
}
/*
int	main(void)
{
	char			*s1;
	char			*s2;
	char			*expl;
	int	ret;

	s1 = "Adef";
	s2 = "A";
	expl = "the difference in ASCII of the first differing characters: ";
	ret = strncmp(s1, s2, 6);
	ft_strncmp(s1, s2, 6);
	printf("Original function: %s%d\n",expl, ret);
	printf("My function: %s%d\n", expl, ft_strncmp(s1, s2, 6));
	return (0);
}*/
