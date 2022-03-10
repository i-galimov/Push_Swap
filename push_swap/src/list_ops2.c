/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_ops2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:52:28 by phella            #+#    #+#             */
/*   Updated: 2022/03/10 13:03:36 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_value(t_list *list, int *n, int value)
{
	if (list->value == value)
		return (0);
	if (list->value > value)
		list->index++;
	else
		(*n)++;
	return (1);
}

t_list	*get_last_b(t_list *begin_list, int value, int *n, int flag)
{
	t_list	*list;

	list = begin_list;
	while (list->next)
	{
		if (flag)
		{
			if (!check_value(list, n, value))
				return (0);
		}
		list = list->next;
	}
	return (list);
}
