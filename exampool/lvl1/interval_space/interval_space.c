/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:09:41 by bassem            #+#    #+#             */
/*   Updated: 2026/08/04 14:50:53 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int  main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac != 2)
        ft_putchar('\n');
    while (av[1][i])
    {
        if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
        ft_putchar(av[1][i]);
        ft_putchar(' ');
        ft_putchar(' ');
        ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');
    return 0;
}
