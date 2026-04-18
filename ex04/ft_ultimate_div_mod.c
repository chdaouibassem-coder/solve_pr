/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 23:51:30 by marvin            #+#    #+#             */
/*   Updated: 2026/04/08 23:51:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod (int *a, int *b)
{
    int div = *a / *b;
    int mod = *a % *b;
    *a = div; 
    *b = mod;
}

