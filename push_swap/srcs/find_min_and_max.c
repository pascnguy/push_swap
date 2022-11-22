/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_and_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:00 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 21:03:36 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void    find_min_a(t_data *data)
{
    t_sort *sort;

    sort = data->top_sort_a;
    data->sort_min_a = sort->nb;
    sort = sort->next;
    while (sort)
    {
        if (sort->nb < data->sort_min_a)
            data->sort_min_a = sort->nb;
        sort = sort->next;
    }
}

void    find_max_a(t_data *data)
{
    t_sort *sort;

    sort = data->top_sort_a;
    if (sort)
    {
        data->sort_max_a =  sort->nb;
        sort = sort->next;
        while (sort)
        {
            if (sort->nb > data->sort_max_a)
                data->sort_max_a = sort->nb;
            sort = sort->next;
        }
    }
}
