/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 23:37:28 by bassem            #+#    #+#             */
/*   Updated: 2026/08/06 00:07:08 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_rot1(char *str)
{
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
        {
            *str += 1;
            ft_putchar(*str);
        }
        else if (*str == 'z' || *str == 'Z')
        {
            *str -= 25;
            ft_putchar(*str);
        }
        else
        ft_putchar(*str);
        str++;
    }   
}
int      main (int ac, char **av)
{
    if (ac != 2)
        ft_putchar('\n');
    else 
        ft_rot1(av[1]);  
}