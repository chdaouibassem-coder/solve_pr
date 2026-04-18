/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:28:41 by marvin            #+#    #+#             */
/*   Updated: 2026/04/14 16:28:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>



void    ft_swap (int *a, int *b)
{
    int temp;

    temp = *a;
	*a = *b;
	*b = temp;
}
void    ft_rev_int_tab (int *tab, int size)
{   
    int start = 0;
    int end = size -1;
    while (start < end)
    {
        ft_swap(&tab[start], &tab[end]);
        start++;
        end++;
    }
    
}