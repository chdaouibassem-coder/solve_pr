/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:34:22 by marvin            #+#    #+#             */
/*   Updated: 2026/03/25 13:34:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void   ft_putchar(char c)
{
    write(1, &c, 1 );
}

void    ft_print_reverse_alphabet(void)
{
    char z;

    z = 'z';
    while(z >= 'a')
    {
        ft_putchar(z);
        z--;

    }
}
