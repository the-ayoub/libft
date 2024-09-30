/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:22:46 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/29 15:51:51 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
/*char    *if_errors(int n)
{
    char    *src;

     if (n == 0)
        {
                src = ft_calloc(1, sizeof(char));
                if (!src)
                        return (NULL);
                return (src = "0");
        }
        if (n == -2147483648)
        {
                src = ft_calloc(12, sizeof(char));
                if (!src)
                        return (NULL);
                return (src = "-2147483648");
        }
        return (src);
}*/

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*src;
	int				i;

	i = word_count(n);
	src = ft_calloc(i + 1, sizeof(char));
	if (n == 0)
	{
		src[0] = '0';
		return (src);
	}
	if (n < 0)
	{
		src[0] = '-';
		num = -n;
	}
	while (n > 0)
	{
		src[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (src);
}
/*int main(void) {
    int n;
    char *test;
    n = 4215;
    test = ft_itoa(n);
    printf("%s",test);
    free(test);
    return 0;
}*/
