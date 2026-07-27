/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 00:52:35 by marvin            #+#    #+#             */
/*   Updated: 2026/07/26 00:52:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_iterative_power(int nb, int power)
{
    int res = 1;
    if (power == 0)
    return 1;
    if (power < 0)
    return 0;
    while (power > 0)
    {
        res  *= nb;
        power--;
    }
    return res;
}
