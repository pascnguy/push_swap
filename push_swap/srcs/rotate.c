/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:58:34 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 16:15:21 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void    ra(t_data *data, int i)
{
    t_sort  *sort;
    t_sort  *new_link;
    t_sort  *tp;

    if (data->sort_size_a > 1)
    {
        sort = data->top_sort_a;
        tp = sort->next;
        new_link = ft_sortnew_index(sort->nb, sort->index);
        if (!new_link)
            exit_free(data);
        ft_sortadd_back(&tp, new_link);
        data->top_sort_a = tp;
        free(sort);
        if (i == 1)
            ft_putstr_fd("ra\n", 1)
    }
}

void    rb(t_data *data, int i)
{
    t_sort  *sort;
    t_sort  *new_link;
    t_sort  *tp;

    if (data->sort_size_b > 1)
    {
        sort = data->top_sort_b;
        tp = sort->next;
        new_link = ft_sortnew_index(sort->nb, sort->index);
        if (!new_link)
            exit_free(data);
        ft_sortadd_back(&tp, new_link);
        data->top_sort_b = tp;
        free(sort);
        if (i == 1)
            ft_putstr_fd("rb\n", 1);
    }
}

void    rr(t_data *data)
{
    ra(data, 0);
    rb(data, 0);
    ft_putstr_fd("rr\n", 1);
}