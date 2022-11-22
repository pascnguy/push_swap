/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:00 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 21:06:24 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void    rra(t_data *data, int i)
{
	t_sort	*last_node;
	t_sort	*new_link;
	t_sort	*tmp;

	if (data->sort_size_a > 1)
	{
		last_node = data->top_sort_a;
		while (last_node->next)
		{
			tmp = last_node;
			last_node = last_node->next;
			if (!last_node->next)
			tmp->next = NULL;
		}
		new_link = ft_sortnew_index(last_node->nb, last_node->index);
		if (!new_link)
			exit_free(data);
		ft_sortadd_front(&data->top_sort_a, new_link);
		free(last_node);
		data->top_sort_a = new_link;
		if (i == 1)
			ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(t_data *data, int i)
{
	t_sort	*last_node;
	t_sort	*new_link;
	t_sort	*tmp;

	if (data->sort_size_b > 1)
	{
		last_node = data->top_sort_b;
		while (last_node->next)
		{
			tmp = last_node;
			last_node = last_node->next;
			if (!last_node->next)
				tmp->next = NULL;
		}
		new_link = ft_sortnew_index(last_node->nb, last_node->index);
		if (!new_link)
			exit_free(data);
		ft_sortadd_front(&data->top_sort_b, new_link);
		free(last_node);
		data->top_sort_b = new_link;
		if (i == 1)
			ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_data *data)
{
	rra(data, 0);
	rrb(data, 0);
	ft_putstr_fd("rrr\n", 1);
}