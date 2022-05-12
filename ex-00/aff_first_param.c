/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 02:45:51 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 02:49:43 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        int i;

        i = -1;
        while(argv[1][++i])
            write(1, &argv[1][i], 1);
        return (0);
    }
    write(1, "\n", 1);
    return (0);
}