/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:44:53 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/18 03:52:59 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < (n - 1) && *s1 == *s2 && (*s1 || *s2))
	{
		s1++;
		s2++;
		i++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
/*int main (void)
{
	char *s1 = "hola";
	char *s2 = "holai";


	printf ("ft:%i\n",ft_strncmp(s1, s2, 4));
	printf ("org:%i\n:",strncmp(s1, s2, 4));
}*/
