#include "push_swap.h"

void	ft_sort3(t_list **a)
{
	int		first_number;
	int		second_number;
	int		third_number;

	first_number = (*a)->value;
	second_number = (*a)->next->value;
	third_number = (*a)->next->next->value;
	if (first_number > second_number && first_number < third_number)
		ft_sa(a);
	if (first_number > second_number && second_number > third_number)
	{
		ft_sa(a);
		ft_rra(a);
	}
	if (first_number > third_number && second_number < third_number)
		ft_ra(a);
	if (first_number < third_number && second_number > third_number)
	{
		ft_sa(a);
		ft_ra(a);
	}
	if (first_number < second_number && first_number > third_number)
		ft_rra(a);
	else
		return ;
}
