/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baouragh <baouragh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 02:43:06 by baouragh          #+#    #+#             */
/*   Updated: 2024/10/20 03:02:40 by baouragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../cub3d.h"

int check_name(char *name)
{
    if (!name || !*name)
        return (-1);
    return (0);
}

int parse(int ac, char **av)
{
    if (ac != 2)
        return (ft_putstr_fd("Not enough args!\n", 2), -1);
    if (check_name(av[1]))
        return (-1);
    return (0);
}

int main(int ac, char **av)
{
    if (parse(ac, av))
        return (1);
}
