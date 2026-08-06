/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 13:50:55 by bassem            #+#    #+#             */
/*   Updated: 2026/08/06 16:29:35 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main ()
{
    char *str = "abcdefghijklmnopuvwxyz";

    int i;

    i = 0;
    while (str[i])
        {
            if ((str[i] - 'a') % 2 == 0)
            {
                ft_putchar(str[i] - 32);
            }
            else if((str[i] - 'a') % 2 != 0) 
                ft_putchar(str[i] + 32);
            else
                ft_putchar(str[i]);

           i++;
        }
        ft_putchar('\n');
        return (0);
}