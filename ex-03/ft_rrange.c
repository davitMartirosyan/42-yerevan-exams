/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:42:24 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/22 23:00:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"
#include <stdlib.h>
int *ft_rrange(int start, int end)
{
    int *rrange;
    int len;

    len = end >= start ? end - start + 1 : start - end + 1; 
    rrange = (int *)malloc(sizeof(int) * len);
    if(!rrange)
        return (NULL);
    while(len--)
    {
        rrange[len] = start >= end ? start-- : start++;
    }
    return (rrange);
}

int main(void)
{
    int *arr = ft_rrange(-1, -3);
    // printf("%d", arr[3]);
}