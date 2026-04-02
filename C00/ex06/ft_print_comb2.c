/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 22:17:10 by marvin            #+#    #+#             */
/*   Updated: 2026/03/28 22:17:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_comb2(void)
{
    int n1;
    int n2;
    n1 = 0;
    while (n1 <= 98)
    {
        n2 = n1 + 1;
        while (n2 <= 99)
        {
            ft_putchar((n1 / 10) + '0');
            ft_putchar((n1 % 10) + '0');
            ft_putchar(' ');
            ft_putchar((n2 / 10) + '0');
            ft_putchar((n2 % 10) + '0');
           if (!(n1 == 98 && n2 == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            n2++;
        }
        n1++;
    }
}
