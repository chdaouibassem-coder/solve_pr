/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_letters1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:30:58 by bassem            #+#    #+#             */
/*   Updated: 2026/08/03 19:22:25 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb >= 10)
    ft_putnbr(nb /= 10);
    ft_putchar(nb % 10 + '0');
}

int    strlen(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        count++;
        i++;
    }
    return count;
}

int     main(int ac, char **av)
{
    if (ac == 2)
    ft_putnbr(strlen(av[1]));
    ft_putchar('\n');
    return 0;   
}