#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

// struct
typedef struct s_list
{
	int				value;
	int				index;
	int				flag;
	struct s_list	*next;
}			t_list;

typedef struct s_all
{
	struct s_list	*a;
	struct s_list	*b;
	int				next;
	int				num;
}			t_all;

// functions

// list_ops.c
void	create_list(t_list **head, char **argv);
t_list	*ft_lstnew(int value);
void	free_list(t_list *head);
int		len_list(t_list *a);
void	ft_lstadd_back(t_list **lst, t_list *new);
// main.c
void	type_sort(t_list **a, int argc);
int		main(int argc, char **argv);
// reverse_rotate.c
void	ft_rra(t_list **a);
void	ft_rrb(t_list **b);
void	ft_rrr(t_list **a, t_list **b);
// rotate.c
void	ft_ra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rr(t_list **a, t_list **b);
// sx_px.c
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_ss(t_list **a, t_list **b);
void	ft_pb(t_list **a, t_list **b);
void	ft_pa(t_list **a, t_list **b);
// sort3.c
void	ft_sort3(t_list **a);
// split.c
char	**ft_split(char *s, char c);
// validator.c
int		ft_check_dublicate(char **argv);
int		ft_check_overflow(char **argv);
int		ft_check_sorted(char **argv);
int		ft_check_input(char **argv);
// validator2.c
int		ft_check_dublicate2(char **arg);
int		ft_check_overflow2(char **arg);
int		ft_check_sorted2(char **arg);
int		ft_check_input2(char **arg);
// errors.c
// utils.c
int		ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
void	ft_arg_error(void);
// parsing_arg.c
char **parsing_args(int argc, char **argv);

#endif