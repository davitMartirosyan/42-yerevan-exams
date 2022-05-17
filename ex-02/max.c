/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:38:35 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/17 01:42:20 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

int max(int *tab, unsigned int len)
{
    int max;

    max = 0;
    while(len--)
    {
        if(tab[len] > max)
            max = tab[len];
    }
    return (max);
}

int main(void)
{
    int tab[] = {1, 5, 100, 35, 90, 2};
    printf("%d", max(tab, 5));
}