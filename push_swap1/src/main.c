#include "push_swap.h"

void    type_sort(t_list **a, t_all *s)
{
	if (s->len < 2)
		ft_arg_error();
	if (s->len == 3)
		ft_sa(a);
	if (s->len == 3)
		ft_sort3(a);
	// if (argc == 5)
	//     sort_by_five(a, b);
	// if (argc > 6)
	//     sort_many_num(s);
}

int	main(int argc, char **argv)
{
	t_all   s;

	if (argc < 2)
		ft_arg_error();
	s.next = 0;
	s.b = 0;
	ft_arg_conv(0, argv, &s);
	save_value(&s.a, &s);
	sort_array(&s.a, &s);
	type_sort(&s.a, &s);
	free_list(s.a);
	free (s.arg);
	// printf("%d\n", s.len);
	return (0);
}
