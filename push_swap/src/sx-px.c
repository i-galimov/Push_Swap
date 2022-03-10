/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sx-px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:55:50 by phella            #+#    #+#             */
/*   Updated: 2022/03/10 11:01:59 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list	**a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	tmp->next = (*a);
	*a = tmp;
	write(1, "sa\n", 3);
}

void	ft_sb(t_list	**b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	(*b)->next = (*b)->next->next;
	tmp->next = (*b);
	*b = tmp;
	write(1, "sb\n", 3);
}

void	ft_ss(t_list	**a, t_list	**b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	tmp->next = (*a);
	*a = tmp;
	tmp = (*b)->next;
	(*b)->next = (*b)->next->next;
	tmp->next = (*b);
	*b = tmp;
	write(1, "ss\n", 3);
}

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a == 0)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*b == 0)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}
