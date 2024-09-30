/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 03:54:07 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/30 20:57:32 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && !c)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
