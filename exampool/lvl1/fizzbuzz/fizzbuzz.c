/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 20:48:26 by bassem            #+#    #+#             */
/*   Updated: 2026/08/05 21:11:23 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void     ft_putnbr(int nb)
{
    if (nb >= 10)
         ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int     main (void)
{

    int n;

    n = 1;
   
    while (n >= 1 && n <= 100)
    {
        int i = n % 3;
        int j = n % 5;
        if (i == 0 && j == 0)
            write(1, "fizzbuzz", 7);
        else if (i == 0)
            write(1, "fizz", 4);
        else if (j == 0)
            write(1, "buzz", 4);
        else if (i != 0 && j != 0)
            ft_putnbr(n);
            write(1, "\n", 1);
            
        n++;   
    }
}