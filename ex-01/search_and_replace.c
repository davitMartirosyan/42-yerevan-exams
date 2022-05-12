/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 06:25:21 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 07:14:01 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"
#include <stdio.h>
void replace(char **to)
{
    int i;

    i = 0;
    while(to[1][i])
    {
        if(to[2][1] == '\0' && to[3][1] == '\0')
        {
            if(to[1][i] == to[2][0])
                write(1, &to[3][0], 1);
            else
                write(1, &to[1][i], 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 4)
    {
        replace(av);
    }   
    write(1, "\n", 1);
}