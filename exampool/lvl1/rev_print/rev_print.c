/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 11:23:32 by bassem            #+#    #+#             */
/*   Updated: 2026/08/02 12:57:05 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_rev_print(char *str)
{
    char *end;
    
    end = str;
    while(*end)
        end++;
        end--;
    while (end >= str)
    {
        ft_putchar(*end);
        end--;
    }
}

int main (int ac , char **av)
{
    
    if (ac == 2)
    {
        ft_rev_print(av[1]);
    }
    ft_putchar('\n');
    return 0;
}