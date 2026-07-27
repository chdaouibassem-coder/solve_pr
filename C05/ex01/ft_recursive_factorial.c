/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 20:38:00 by marvin            #+#    #+#             */
/*   Updated: 2026/07/25 20:38:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_recursive_factorial(int nb)

{
    if (nb < 0) //invalid argument
    return (0);
    if (nb == 0 || nb == 1) // base case
    return 1;
    return nb * ft_recursive_factorial(nb - 1);
}
