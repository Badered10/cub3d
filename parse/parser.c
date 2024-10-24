/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baouragh <baouragh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 02:43:06 by baouragh          #+#    #+#             */
/*   Updated: 2024/10/24 17:50:13 by baouragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// int parse_content(t_cub *cub)
// {
    
// }

int check_name(char *name, t_cub *cub)
{
    char *full;

    full = name;
    if (!name || !*name)
        return (ft_putstr_fd("you enterd an empty file name\n", 2), -1);
    name = ft_strrchr(name, '.');
    if (!name)
        return (ft_putstr_fd("File format .cub not found\n", 2), -1);
    if (strcmp(name, ".cub"))
        return (ft_putstr_fd("File format must end with .cub\n", 2), -1);
    cub->fd = open(full, O_RDONLY);
    if (cub->fd < 0)
        return (ft_putstr_fd("File Not found or not readable\n", 2), -1);
    return (0);
}

int parse(int ac, char **av, t_cub *cub)
{
    if (ac != 2)
        return (ft_putstr_fd("Not enough args!\n", 2), -1);
    if (check_name(av[1], cub))
        return (-1);
    // parse_content(cub);
    return (0);
}

int main(int ac, char **av)
{
    t_cub cub;

    if (parse(ac, av, &cub))
        return (1);
}
