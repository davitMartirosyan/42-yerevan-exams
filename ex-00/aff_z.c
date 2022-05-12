/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 02:54:35 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 03:01:19 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

int main(int argc, char **argv)
{
    if(argc < 1)
    {
        write(1, "z\n", 2);
        return (0);
    }
    int i;
    int c;

    c = 0;
    while(c < argc)
    {
        i = -1;
        while(argv[c][++i])
        {
            if(argv[c][i] == 'z')
            {
                write(1, "z\n", 2);
                return (0);
            }
        }
        c++;
    }
    write(1, "z\n", 2);
    return (0);
}