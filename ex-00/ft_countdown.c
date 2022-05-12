/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:02:07 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 03:09:17 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void ft_countdown(void)
{
    int n;

    n = ':';
    while(--n >= '0')
        write(1, &n, 1);
    write(1, "\n", 1);
    return ;
}

int main(void)
{
    ft_countdown();
}