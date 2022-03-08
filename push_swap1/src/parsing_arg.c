#include "push_swap.h"

char    *ft_arg_str(char **argv)
{
	int     i;
	char    *res;

	i = 1;
	res = ft_strdup(argv[i]);
	i++;
	while (argv[i])
	{
		res = ft_strjoin(res, " ");
		res = ft_strjoin(res, argv[i++]);
	}
	return (res);
}


void    ft_check_sorted(t_all *s)
{

	int    i;

	i = 0;
	while (i < s->len - 1)
	{
		if (s->arg[i] > s->arg[i + 1])
			return;
		i++;
	}
	ft_arg_error();
	printf("ft_check_sorted\n");
}

void    ft_check_dublicate(int *res, int *len)
{
    int i;
    int j;

    i = 0;
    while (i + 1 < *len)
    {
        j = i + 1;
        while (j < *len)
        {
            if (res[i] == res[j])
                ft_arg_error();
            j++;
        }
        i++;
    }
}

void	ft_arg_conv(int len, char **argv, t_all *s)
{
	int     i;
	int     *res;
	char    **strs;
	char	*arg;

	arg = ft_arg_str(argv);
	i = 0;
	strs = ft_split(arg, ' ');
	if (!strs)
		ft_arg_error();
	while (strs[len])
		len++;
	res = malloc(sizeof(int) * len);
	if (!res)
		ft_arg_error();
	while (i < len)
	{
		res[i] = ft_atoi(strs[i]);
		free(strs[i]);
		i++;
	}
	s->len = i;
	s->arg = res;
	free(strs);
	free(arg);
	for (int j = 0; j < i; j++)
		printf("[%d] --> %d\n", j ,s->arg[j]);
	ft_check_sorted(s);
	ft_check_dublicate(s->arg, &(s->len));
}
