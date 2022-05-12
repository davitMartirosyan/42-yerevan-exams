/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:36:55 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 04:42:56 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void repeat_alpha(char *repeat)
{
    int i;

    while(*repeat)
    {
        i = 0;
        if(*repeat >= 'A' && *repeat <= 'Z')
            i = *repeat - 64;
        else if(*repeat >= 'a' && *repeat <= 'z')
            i = *repeat - 96;
        while(i)
        {
            write(1, repeat, 1);
            i--;
        }
        repeat++;
    }
}

int main(int argc, char **argv)
{
    repeat_alpha(argv[1]);
    return (0);
}