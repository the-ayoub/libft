/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:34:21 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/19 21:33:25 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char *ft_strdup(const char *s)
{
	
	int	len_s;
	char	*dest;
	int	i;

	len_s = ft_strlen(s);
	dest = malloc((len_s + 1) * sizeof(char));
	if (!dest)
		return(NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	return (*dest);
}
