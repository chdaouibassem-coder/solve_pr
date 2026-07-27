/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 20:22:14 by marvin            #+#    #+#             */
/*   Updated: 2026/07/25 20:22:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_iterative_factorial(int nb)
{
    int res = 1;
    if (nb < 0)
    return 0;
    if (nb == 0 || nb == 1)
    return 1;
    while (nb > 1)
    {
        res *= nb;
        nb--;
    }
    return res;
}

