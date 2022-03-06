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

int *ft_arg_conv(int *len, char **argv)
{
    int     i;
    int     *res;
    char    **strs;
	char	*arg;

	arg = ft_arg_str(argv);
    i = 0;
    strs = ft_split(arg, ' ');
    if (!strs)
        ft_error();
    while (strs[*len])
        (*len)++;
    res = malloc(sizeof(int) * (*len));
    if (!res)
        ft_error();
    while (i < (*len))
    {
        res[i] = ft_atoi(strs[i]);
        free(strs[i]);
        i++;
    }
    free(strs);
    if (ft_check_input(res) == 1)
        ft_arg_error();
    return (res);
}

int    ft_check_sorted(char **res)
{
    int    i;

    i = 0;
    while (res[i + 1])
    {
        if (ft_atoi(res[i]) > ft_atoi(res[i + 1]))
            return (0);
        i++;
    }
    return (1);
}

int   ft_check_dublicate(char **res)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (res[(i++) + 1])
    {
        while (res[++j])
        {
            if (ft_atoi(res[i]) == ft_atoi(res[j]))
                return (1);
        }
    }
    return (0);
}

int	ft_check_input(char **res)
{
	if (ft_check_dublicate(res) == 1 || ft_check_sorted(res) == 1)
		return (1);
	return (0);
}
