/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:25 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 17:07:51 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void    push_min_to_b(t_data *data)
{
    t_sort  *sort;
    int     i;

    i = 0;
    sort = data->top_sort_a;
    while (sort->nb != data->sort_min_a && ++i)
        sort = sort->next;
    while (sort != NULL)
    {
        if (data->top_sort_a->nb == data->sort_min_a)
        {
            pb(data);
            break ;
        }
        else
        {
            while (data->top_sort_a->nb != data->sort_min_a)
            {
                if (i > 2)
                    rra(data, 1);
                else
                    ra(data, 1);
            }
        }
    }
}

void    algo_three(t_data *data)
{
    t_sort  *sort;
    int     scd;
    int     trd;

    sort = data->top_sort_a;
    scd = sort->next->nb;
    trd = sort->next->next->nb;
    if (sort->nb > scd && scd < trd && sort->nb < trd)
        sa(data, 1);
    else if (sort-> nb < scd && scd > trd && sort->nb < trd)
    {
        sa(data, 1);
        ra(data, 1);
    }
    else if (sort->nb > scd && scd < trd && sort->nb > trd)
        ra(data, 1);
    else if (sort->nb > scd && scd > trd && sort->nb > trd)
    {
        sa(data, 1);
        rra(data, 1);
    }
    else if (sort->nb < scd && scd > trd && sort->nb > trd)
        rra(data, 1);
}

void    algo_five(t_data *data)
{
    if (data->sort_size_a == 5)
        push_min_to_b(data);
    push_min_to_b(data);
    algo_three(data);
    pa(data);
    pa(data);
}

void    sort_radix(t_data *data)
{
    int max_bits;
    int i;
    int j;
    int sort_size_a;

    i = 0;
    max_bits = 0;
    sort_size_a = data->sort_size_a;
    while (((data->sort_size_a -1) >> max_bits) != 0)
        ++max_bits;
    while (i < max_bits)
    {
        j = 0;
        while (j < sort_size_a)
        {
            if (((data->top_sort_a->index >> i) & 1) == 1)
                ra(data, 1);
            else
                pb(data);
            j++;
        }
        i++;
        while (data->sort_size_b != 0)
            pa(data);
    }
}

void    sort(t_data *data)
{
    if (sorted(data) == 0)
        exit_success(data);
        find_index(data);
        find_min_a(data);
        find_max_a(data);
        if (data->sort_size_a == 2)
            sa(data, 1);
        else if (data->sort_size_a == 3)
            algo_three(data);
        else if (data->sort_size_a <= 5)
            algo_five(data);
        else
            sort_radix(data);
}