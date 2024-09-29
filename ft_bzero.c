/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:12:54 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/22 16:54:29 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*local_s;
	unsigned int	i;

	local_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		local_s[i] = '\0';
		i++;
	}
}
/*int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		ft_bzero(argv[1],5);
		printf("%c", *argv[1]);
	}
	return (0);
}*/
