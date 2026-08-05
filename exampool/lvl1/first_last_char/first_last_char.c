/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_last_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 19:16:36 by bassem            #+#    #+#             */
/*   Updated: 2026/08/04 23:44:15 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void       ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}

int     main(int ac, char **av)
{ 
    int len;

    len = ft_strlen(av[1]);
    if (av[1][0] == '\0')
        ft_putchar('\n');

    if (ac == 2)
    {
        ft_putchar(av[1][0]);
        ft_putchar(av[1][len - 1]);
    }


    ft_putchar('\n');
    return 0;
}