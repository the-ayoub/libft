/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:01 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/10/02 19:50:35 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	ft_lstsize(t_list *lst)
{
	if (lst == NULL)
		return (1);
	i = 0
	while (lst->next != NULL)
		i++;
	return (i);
}
