/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:06:42 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 03:08:41 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void ft_print_numbers(void)
{
    int n;

    n = '/';
    while(++n <= '9')
        write(1, &n, 1);
    return;
}

int main(void)
{
    ft_print_numbers();
}