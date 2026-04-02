/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 08:41:09 by marvin            #+#    #+#             */
/*   Updated: 2026/03/25 08:41:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1 );
}

void    ft_print_alphabet(void)
{
    char a;

    a = 'a';
    while(a <= 'z')
    {
        ft_putchar(a);
        a++;
    }
}
