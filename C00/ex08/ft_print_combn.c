/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 21:36:50 by marvin            #+#    #+#             */
/*   Updated: 2026/03/30 21:36:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_array(int n, int *tab)
{
    int    i;

    i = 0;
    while(i < n)
    {
        ft_putchar(tab[i++] + '0');
    }
    if (tab[0] < 10-n)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }

}

void    ft_cm(int n, int index, int value, int *tab)
{
    if (index == n)
    {
        print_array(n, tab);
        return ;
    }    

    while(value <= 9)
    {
        tab[index]= value;
        ft_cm(n, index + 1, value + 1, tab);
        value++;
    }
}

void ft_print_combn(int n)
{
    int    tab[10];

    if (n > 0 && n < 10)
    {
	    ft_cm(n, 0 ,0, tab);
    }
}

