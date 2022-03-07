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
