/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:22:23 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/16 10:56:49 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void	exit_success(t_data *data)
{
	free_sort(&data->top_sort_a);
	free_sort(&data->top_sort_b);
	exit(0);
}

void	exit_free(t_data *data)
{
	free_sort(&data->top_sort_a);
	free_sort(&data->top_sort_b);
	exit_error();
}

void	exit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

void	free_sort(t_sort **asort)
{
	t_sort	*sort;
	t_sort	*tmp;

	if (asort)
	{
		sort = *asort;
		while (sort)
		{
			if (sort->next)
				tmp = sort->next;
			else
				tmp = NULL;
			free(sort);
			sort = tmp;
		}
		*asort = NULL;
	}
}

void	free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	*str = NULL;
	if (str)
		free(str);
}
