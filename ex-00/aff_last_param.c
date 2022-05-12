/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 02:50:32 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 02:52:51 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        int i;

        i = -1;
        argc--;
        while(argv[argc][++i])
            write(1, &argv[argc][i], 1);
        return (0);
    }
    write(1, "\n", 1);
    return (0);
}