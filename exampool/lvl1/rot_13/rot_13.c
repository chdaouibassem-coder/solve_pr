/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 22:35:13 by bassem            #+#    #+#             */
/*   Updated: 2026/08/05 23:21:00 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_rot_13(char c)
{
    if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
    {
        c = c + 13;
    }
    else if((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
    {
        c = c - 13;
    }
    return c;
}

int     main (int ac, char **av)
{
    int i; 

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            ft_putchar(ft_rot_13(av[1][i]));
            i++;
        }
    }
    ft_putchar('\n');
}