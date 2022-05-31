/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:02:41 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/22 23:08:28 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

int len(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}

void ft_hidenp(char *str, char *match)
{
    int i;
    int c;
    int a;
    
    i = 0;
    c = 0;
    a = 0;
    while(str[i])
    {
        while(match[c])
        {
            if(str[i] == match[c])
            {
                c++;
                a++;
                break;
            }
            c++;
        }
        i++;
    }
    if(a == i)
        write(1, "1", 1);
    else
        write(1, "0", 1);
}

int main(int ac, char **av)
{
    if(ac == 3)
        ft_hidenp(av[1], av[2]);
    write(1, "\n", 1);
}