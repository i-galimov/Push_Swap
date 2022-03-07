#include "push_swap.h"

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}

int ft_atoi(const char *str)
{
    int         i;
    int         neg;
    long long   res;
    i = 0;
    res = 0;
    neg = 1;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    if (!(str[i] >= '0' && str[i] <= '9'))
        ft_arg_error();
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + neg * (str[i] - 48);
        i++;
        if (res > 2147483647 || res < -2147483648)
            ft_arg_error();
    }
    return (res);
}

void	ft_arg_error(void)
{
    write(1, "Incorrect arguments\n", 20);
    exit(1);
}

void	ft_arg_error1(void)
{
    write(1, "1\n", 2);
    exit(1);
}

void	ft_arg_error2(void)
{
    write(1, "2\n", 2);
    exit(1);
}

void	ft_arg_error3(void)
{
    write(1, "3\n", 2);
    exit(1);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
