/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:38 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 16:56:07 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

int sorted(t_data *data)
{
    t_sort  *sort;
    int nb;

    sort = data->top_sort_a;
    while (sort)
    {
        nb = sort->nb;
        sort = sort->next;
        if (sort && nb > sort->nb)
            return (1);
    }
    if (data->top_sort_b)
        return (1);
    return (0);
}