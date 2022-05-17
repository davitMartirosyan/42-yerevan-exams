/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:22:17 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/17 01:36:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"



int main(int ac, char **av)
{
    int l;

    if(ac == 2)
    {
        l = 0;
        while(av[1][l])
        {
            if(av[1][l] >= 'a' && av[1][l] <= 'z')
                av[1][l] = 'z' - (av[1][l] - 'a');
            else if(av[1][l] >= 'A' && av[1][l] <= 'Z')
                av[1][l] = 'Z' - (av[1][l] - 'A');
            write(1, &av[1][l], 1);
            l++;
        }
    }
    write(1, "\n", 1);
}