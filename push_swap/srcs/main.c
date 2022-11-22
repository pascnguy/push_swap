/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:18:18 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/15 20:57:00 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int main(int argc, char ** argv)
{
    t_data  data;

    if (argc == 1)
        return (0);
    ft_bzero(&data, sizeof(data));
    parse_args(argv, &data);
    if (data.sort_size_a == 1)
        exit_success(&data);
    sort(&data);
    if (sorted(&data) == EXIT_SUCCESS)
        exit_success(&data);
    else
        exit_free(&data);
    return (0);
}
