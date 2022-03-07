#include "push_swap.h"

void	define_index(t_list **a, int *arr, t_all *s)
{
	t_list    *tmp;
	int        i;
	int        size;

	size = s->len;
	tmp = *a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->value == arr[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	ft_swap(int *a, int *b)
{
	int    tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_array(int argc, char **argv, t_list **a, t_all *s)
{
	int		*res;
	int		*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = ft_arg_conv(0, argv, s);
	arr = malloc(sizeof(int) * (s->len));
	while (j < s->len)
		arr[i++] = res[j++];
	i = 0;
	while (i != s->len)
	{
		j = 0;
		while (j != s->len - 2)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	define_index(a, arr, s);
	free(arr);
	free(res);
}