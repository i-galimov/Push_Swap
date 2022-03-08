#include "push_swap.h"

void	save_value(t_list **a, t_all *s)
{
	int		i;
	int		*res;

	res = s->arg;
    // (*a) = ft_lstnew(res[0]);
    // i = 1;
	i = 0;
    while (i < s->len)
	{
        ft_lstadd_back(a, ft_lstnew(res[i]));
		i++;
	}
	// t_list	*tmp;
	// tmp = *a;
	// while (tmp->next != NULL)
	// {
	// 	printf("val = %d\n", tmp->value);
	// 	printf("ind = %d\n", tmp->index);
	// 	tmp = tmp->next;
	// }
	// printf("%d\n", tmp->value);
	// printf("ind = %d\n", tmp->index);
}

// void    create_list(t_list **head, char **argv)
// {
//     int    i;

//     i = 1;
//     (*head) = ft_lstnew(ft_atoi(argv[1]));
//     while (argv[++i])
//         ft_lstadd_back(head, ft_lstnew(ft_atoi(argv[i])));
// }

void	define_index(t_list **a, int *arr, t_all *s)
{
	t_list	*tmp;
	int		i;
	int		size;

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

void	sort_array(t_list **a, t_all *s)
{
	int		*res;
	int		*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = s->arg;
	arr = malloc(sizeof(int) * (s->len));
	while (j < s->len)
		arr[i++] = res[j++];
	i = 0;
	while (i != s->len)
	{
		j = 0;
		while (j != s->len - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}

	// int y = 0;
	// while(y < s->len)
	// {
	// 	printf("arr[y] = %d\n", arr[y]);
	// 	y++;
	// }
	
	define_index(a, arr, s);
	free(arr);

	t_list	*tmp;
	tmp = *a;
	while (tmp->next != NULL)
	{
		printf("val = %d\n", tmp->value);
		printf("ind = %d\n\n", tmp->index);
		tmp = tmp->next;
	}
	printf("val = %d\n", tmp->value);
	printf("ind = %d\n", tmp->index);
}
