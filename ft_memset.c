/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:17:50 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/15 16:43:35 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*local_s;
	unsigned int	i;

	local_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		local_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
