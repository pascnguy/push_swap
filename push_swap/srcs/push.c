/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:55:42 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 21:05:59 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

t_sort  *sort_a;
t_sort  *sort_b;
t_sort  *tp;

void    pa(t_data *data)
{
    if (data->sort_size_b > 0)
    {
        sort_b = data->top_sort_b;
        if (sort_b->next)
        	tp = sort_b->next;
    	 else
        	tp = NULL;
	    sort_a = ft_sortnex_index(sort_b->nb, sort_b->index);
   	 	if (!sort_a)
   			exit_free(data);
   	 	ft_sortadd_front(&data->top_sort_a, sort_a);
        free(sort_b);
    	data->top_sort_b = tp;
    	data->sort_size_a++;
   		data->sort_size_b--;
    	find_max_a(data);
    	find_min_a(data);
    	ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_data *data)
{
	t_sort	*sort_a;
	t_sort	*sort_b;
	t_sort	*tp;

	if (data->sort_size_a > 0)
	{
		sort_a = data->top_sort_a;
		if (sort_a->next)
			tp = sort_a->next;
		else
			tp = NULL;
		sort_b = ft_sortnew_index(sort_a->nb, sort_a->index);
		if (!sort_b)
			exit_free(data);
		ft_stackadd_front(&data->top_sort_b, sort_b);
		free(sort_a);
		data->top_sort_a = tp;
		data->sort_size_a--;
		data->sort_size_b++;
		find_max_a(data);
		find_min_a(data);
		ft_putstr_fd("pb\n", 1);
	}
}