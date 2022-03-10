/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:54:17 by phella            #+#    #+#             */
/*   Updated: 2022/03/10 11:01:27 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **a)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*a) || !(*a)->next)
		return ;
	last = *a;
	while (last->next)
		last = last->next;
	tmp = *a;
	*a = (*a)->next;
	last->next = tmp;
	tmp->next = 0;
	write(1, "ra\n", 3);
}

void	ft_rb(t_list **b)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*b) || !(*b)->next)
		return ;
	last = *b;
	while (last->next)
		last = last->next;
	tmp = *b;
	*b = (*b)->next;
	last->next = tmp;
	tmp->next = 0;
	write(1, "rb\n", 3);
}

void	ft_rr(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*last;

	if ((*a) && (*a)->next)
	{
		last = *a;
		while (last->next)
			last = last->next;
		tmp = *a;
		*a = (*a)->next;
		last->next = tmp;
		tmp->next = 0;
	}
	if ((*b) && (*b)->next)
	{
		last = *b;
		while (last->next)
			last = last->next;
		tmp = *b;
		*b = (*b)->next;
		last->next = tmp;
		tmp->next = 0;
	}
	if (((*a) && (*a)->next) || ((*b) && (*b)->next))
		write(1, "rr\n", 3);
}
