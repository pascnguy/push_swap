/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:20:15 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 17:01:48 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void	sa(t_data *data, int i)
{
	t_sort	*sort_fst;
	t_sort	*sort_scd;
	int		tp;
	int		tp_index;

	if (data->sort_size_a > 1)
	{
		sort_fst = data->top_sort_a;
		tp = sort_fst->nb;
		tp_index = sort_fst->index;
		sort_scd = sort_fst->next;
		sort_fst->nb = sort_scd->nb;
		sort_scd->nb = tp;
		sort_scd->index = tp_index;
		if (i == 1)
			ft_putstr_fd("sa\n", 1);
	}
}

void	sb(t_data *data, int i)
{
	t_sort	*sort_fst;
	t_sort	*sort_scd;
	int		tp;
	int		tp_index;

	if (data->sort_size_b > 1)
	{
		sort_fst = data->top_sort_b;
		tp = sort_fst->nb;
		tp_index = sort_fst->index;
		sort_scd = sort_fst->next;
		sort_fst->nb = sort_scd->nb;
		sort_scd->nb = tp;
		sort_scd->index = tp_index;
		if (i == 1)
			ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_data *data)
{
	sa(data, 0);
	sb(data, 0);
	ft_putstr_fd("ss\n", 1);
}
