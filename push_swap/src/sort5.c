/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:55:31 by phella            #+#    #+#             */
/*   Updated: 2022/03/10 11:01:47 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_list **a)
{
	t_list	*tmp;
	int		min;

	min = INT_MAX;
	tmp = (*a);
	while (tmp)
	{
		if (min > tmp->index)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}

void	ft_move5(t_list **a, t_list **b)
{
	int		min;
	t_list	*tmp;

	tmp = *a;
	min = ft_find_min(a);
	if (tmp->next->index == min)
		ft_sa(a);
	else if (tmp->next->next->index == min)
	{
		ft_ra(a);
		ft_sa(a);
	}
	else if (tmp->next->next->next->index == min)
	{
		ft_rra(a);
		ft_rra(a);
	}
	else if (tmp->next->next->next->next->index == min)
		ft_rra(a);
	ft_pb(a, b);
}

void	ft_move4(t_list **a, t_list **b)
{
	int		min;
	t_list	*tmp;

	tmp = *a;
	min = ft_find_min(a);
	if (tmp->next->index == min)
		ft_sa(a);
	else if (tmp->next->next->index == min)
	{
		ft_rra(a);
		ft_rra(a);
	}
	else if (tmp->next->next->next->index == min)
		ft_rra(a);
	ft_pb(a, b);
}

void	ft_sort4(t_list **a, t_list **b)
{
	ft_move4(a, b);
	ft_sort3(a);
	ft_pa(a, b);
}

void	ft_sort5(t_list **a, t_list **b)
{
	ft_move5(a, b);
	ft_move4(a, b);
	ft_sort3(a);
	ft_pa(a, b);
	ft_pa(a, b);
}
