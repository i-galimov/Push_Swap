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

int *ft_arg_conv(int len, char **argv, t_all *s)
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
	free(strs);
	ft_check_sorted(res);
	ft_check_dublicate(res);
	for (int j = 0; j < i; j++)
		printf("[%d] --> %d\n", j ,res[j]);
	return (res);
}

void    ft_check_sorted(int *res)
{
	int    i;

	i = 0;
	while (res[i + 1])
	{
		if (res[i] > res[i + 1])
			return ;
		i++;
	}
	ft_arg_error();
}

void  ft_check_dublicate(int *res)
{
	int    i;

	i = 0;
	while (res[(i++) + 1])
	{
		if (res[i] == res[i + 1])
			ft_arg_error();
	}
}
