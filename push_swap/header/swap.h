/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:50:02 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 17:07:36 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_sort
{
    int             nb;
    int             index;
    struct s_sort	*next;
}   t_sort;

typedef struct  s_data
{
    t_sort 	*top_sort_a;
	t_sort 	*top_sort_b;
	int		sort_size_a;
	int		sort_size_b;
	int		sort_min_a;
	int		sort_max_a;
	int		sort_min_b;
	int		sort_max_b;
}	t_data;

long	ft_atol(const char *str);

int		ft_isdigit(int c);
int		ft_isspace(char c);
int		sorted(t_data *data);
int		ft_atoi(const char *str);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char 	**ft_split_spaces(char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

t_sort 	*ft_stacknew(int nb);
t_sort  *ft_stacknew_index(int nb, int index);

void	exit_error(void);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	rr(t_data *data);
void	rrr(t_data *data);
void	sort(t_data *data);
void	free_array(char **str);
void	ra(t_data *data, int i);
void	exit_free(t_data *data);
void	sa(t_data *data, int i);
void	sb(t_data *data, int i);
void	rb(t_data *data, int i);
void	algo_five(t_data *data);
void	find_min_a(t_data *data);
void	find_max_a(t_data *data);
void	find_index(t_data *data);
void	algo_three(t_data *data);
void	rra(t_data *data, int i);
void	rrb(t_data *data, int i);
void	exit_success(t_data *data);
void	ft_bzero(void *s, size_t n);
void	free_stack(t_sort **astack);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	parse_args(char **argv, t_data *data);
void	ft_stackadd_back(t_sort **astack, t_sort *new);
void    ft_stackadd_front(t_sort **astack, t_sort *new);

#endif
