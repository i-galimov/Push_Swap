/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:52:38 by phella            #+#    #+#             */
/*   Updated: 2022/03/10 13:19:40 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	type_sort(t_list **a, t_list **b, t_all *s)
{
	if (s->len < 2)
		ft_arg_error();
	if (s->len == 2)
		ft_sa(a);
	if (s->len == 3)
		ft_sort3(a);
	if (s->len == 4)
		ft_sort4(a, b);
	if (s->len == 5)
		ft_sort5(a, b);
	if (s->len > 5)
		sort_all(s);
}

int	main(int argc, char **argv)
{
	t_all	s;

	if (argc < 2)
		ft_arg_error();
	s.next = 0;
	s.b = 0;
	ft_arg_conv(0, 0, argv, &s);
	save_value(&s.a, &s);
	sort_array(&s.a, &s);
	type_sort(&s.a, &s.b, &s);
	free_list(s.a);
	free (s.arg);
	return (0);
}
