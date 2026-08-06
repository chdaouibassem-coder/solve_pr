/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:37:16 by bassem            #+#    #+#             */
/*   Updated: 2026/08/06 12:42:25 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void       ft_putchar(char c)
{
    write(1, &c, 1);   
}

int     main(int ac, char **av)
{
      int i;

        i = 0;
        while (av[1][i])
    {
        if (av[1][i] == av[2][0])
        {
            ft_putchar(av[3][0]);
        }
        else
         ft_putchar(av[1][i]);
        i++;
    }      
    ft_putchar('\n');
}