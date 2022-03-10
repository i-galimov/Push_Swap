/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:51:30 by phella            #+#    #+#             */
/*   Updated: 2022/03/10 13:19:12 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (lst == NULL)
		return (NULL);
	lst->next = NULL;
	lst->value = value;
	lst->flag = 0;
	return (lst);
}

void	free_list(t_list *head)
{
	if (head->next != NULL)
		free_list(head->next);
	free(head);
}

int	len_list(t_list *a)
{
	int	n;

	n = 0;
	while (a)
	{
		n++;
		a = a->next;
	}
	return (n);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (*lst == NULL)
		*lst = new;
	else
	{
		list = *lst;
		while (list->next != NULL)
			list = list->next;
		list->next = new;
	}
}
