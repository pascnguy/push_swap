/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:22:23 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 21:03:48 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

int check_duplicate(t_sort *sort_a)
{
    int i;
    int j;
    t_sort *sort_tmp;

	while (sort_a)
	{
		i = sort_a->nb;
		sort_tmp = sort_a;
		while (sort_tmp->next)
		{
			sort_tmp = sort_tmp->next;
			j = sort_tmp->nb;
			if (i == j)
				return (1);
		}
		sort_a = sort_a->next;
	}
	return (0);
}

int	check_digit(char **str, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	(void)data;
	if (!str || !str[0])
		return (1);
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			j++;
			if (!str[i][j])
				return (1);
		}
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	into_stack(char **str, t_data *data)
{
	int		i;
	t_sort 	*new_link;
	long	nb;

	i = 0;
	(void)data;
	while (str[i])
	{
		nb = ft_atol(str[i]);
		if (nb < -2147483648 || nb > 2147483647)
			return (1);
		new_link = ft_sortnew(ft_atoi(str[i]));
		if (!new_link)
			return (1);
		ft_sortadd_back(&data->top_sort_a, new_link);
		data->sort_size_a++;
		i++;
	}
	return (0);
}

void	parse_args(char **argv, t_data *data)
{
	int	i;
	char **args;

	i = 1;
	while (argv[i])
	{
		args = ft_split_spaces(argv[i]);
		if (check_digit(args, data) == 1 || into_sort(args, data) == 1)
		{
			free_array(args);
			exit_free(data);
		}
		free_array(args);
		i++;
	}
	if (check_duplicate(data->top_sort_a) == 1)
		exit_free(data);
}