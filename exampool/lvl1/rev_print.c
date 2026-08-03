/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 11:23:32 by bassem            #+#    #+#             */
/*   Updated: 2026/08/02 11:56:00 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int main (int ac , char **av)
{
    
    if (ac == 2)
    {
        int i;

        i = ac - 1;
        while (av[1][i])
        {
            ft_putchar(av[1][i]);
            i--;
        }
    }
    ft_putchar('\n');
    return 0;
}