/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 02:24:46 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/30 20:24:26 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (new_element == 0)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
