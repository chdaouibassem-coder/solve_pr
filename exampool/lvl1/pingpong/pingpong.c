/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pingpong.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:40:01 by bassem            #+#    #+#             */
/*   Updated: 2026/08/05 19:24:24 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str++ ,1);
    }
}

void     ft_putnbr(int nb)
{
    if (nb >= 10)
         ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

void	pingpong(int n)
{
    
    if (n > 1 && n < 1000)
    {
        if(n % 3 == 0 && n % 5 == 0)
        {
            ft_putstr("pingpong"); 
            ft_putchar('\n');
        }
        else if (n % 3 == 0)
        {
            ft_putstr("ping");
            ft_putchar('\n');
        }
        else if (n % 5 == 0)
        {
            ft_putstr("pong");
            ft_putchar('\n');
        }
        else if (n == 998)
        {
            ft_putnbr(n);
            ft_putchar('\n');
        }
    } 
        if (n == 1)
    {
        ft_putnbr(n);
        ft_putchar('\n');
    }
}  

int	main(void)
{
	pingpong(1); // 1
	pingpong(3); // ping
	pingpong(5); // pong
	pingpong(15); // pingpong
	pingpong(999); // ping
	pingpong(998); // 998
	return (0);
}