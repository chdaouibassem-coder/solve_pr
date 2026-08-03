/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:25:33 by bassem            #+#    #+#             */
/*   Updated: 2026/08/02 14:06:23 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


void    ft_repeat(char c ,int n)
{
    if (c >= 'a' && c <= 'z')
        n = c - 'a' + 1 ;
    if (c >= 'A' && c <= "Z")
        n = c - 'A' + 1;    
}
int     main (char ac , char **av)
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while ()
        {
            ft_repeat(av[1][i]);
            ft_putchar(av[1][i]);
           i++;
        }
    }
    
    ft_putchar('\n');
    return (0);
}