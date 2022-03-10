/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:54:03 by phella            #+#    #+#             */
/*   Updated: 2022/03/10 11:01:20 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **a)
{
	t_list	*last_prev;

	if (!*a || !(*a)->next)
		return ;
	last_prev = *a;
	while (last_prev->next->next)
		last_prev = last_prev->next;
	last_prev->next->next = *a;
	*a = last_prev->next;
	last_prev->next = 0;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_list **b)
{
	t_list	*last_prev;

	if (!*b || !(*b)->next)
		return ;
	last_prev = *b;
	while (last_prev->next->next)
		last_prev = last_prev->next;
	last_prev->next->next = *b;
	*b = last_prev->next;
	last_prev->next = 0;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **a, t_list **b)
{
	t_list	*last_prev;

	if (*a && (*a)->next)
	{
		last_prev = *a;
		while (last_prev->next->next)
			last_prev = last_prev->next;
		last_prev->next->next = *a;
		*a = last_prev->next;
		last_prev->next = 0;
	}
	if (*b && (*b)->next)
	{
		last_prev = *b;
		while (last_prev->next->next)
			last_prev = last_prev->next;
		last_prev->next->next = *b;
		*b = last_prev->next;
		last_prev->next = 0;
	}
	if ((*a && (*a)->next) || (*b && (*b)->next))
		write(1, "ft_rrr\n", 4);
}
