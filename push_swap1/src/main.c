#include "push_swap.h"

void    type_sort(t_list **a, int argc)
{
    if (argc == 3)
        ft_sa(a);
    if (argc == 4)
        ft_sort3(a);
    // if (argc == 5)
    //     sort_by_five(a, b);
    // if (argc > 6)
    //     sort_many_num(s);
}

int	main(int argc, char **argv)
{
    int     len;
    t_all   s;

    len = 0;
	s.next = 0;
	s.b = 0;
	s.num = len_list(s.a);
    if (argc < 2)
        ft_arg_error();
	ft_arg_conv(&len, argv);
    create_list(&s.a, argv);
    // sort_array(argc, argv, &s.a);
    type_sort(&s.a, argc);
    free_list(s.a);
    return (0);
}
