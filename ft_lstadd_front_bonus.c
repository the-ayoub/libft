/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bouns.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:27:51 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/10/02 18:52:57 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return(NULL);
	new->next = *lst;
	*lst = new;
}
