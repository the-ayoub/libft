/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:54:51 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/19 18:31:22 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*s;

	s = (char *)big;
	if (!little)
		return (s);
	i = 0;
	n = ft_strlen(little);
	while (i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
			if (n == j)
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char big[] = "Hola mundo ayoub";
	char little[] = "mundo";
	printf("Resultat: %s ", ft_strnstr(big,little,14));
	return (0);
}*/
