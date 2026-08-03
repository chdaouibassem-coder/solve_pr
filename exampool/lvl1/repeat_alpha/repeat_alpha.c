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

   

void    ft_repeat(char c)
{
    int n;

    n = 0;
   if (c >= 'a' && c <= 'z')
        n = c - 'a' + 1 ;
    if (c >= 'A' && c <= 'Z')
        n = c - 'A' + 1;  
    while (n > 0)
    {
        ft_putchar(c);
        n--;
    }
}
int     main (int ac , char **av)
{
    if (ac == 2)
    {
        int i;


        i = 0;
        while (av[1][i])
        {
            ft_repeat(av[1][i]);
           i++;
        }
    }
    
    ft_putchar('\n');
    return (0);
}