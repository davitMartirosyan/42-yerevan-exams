/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:21:05 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/22 23:25:46 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"
#include <stdlib.h>
int ft_pgcd(unsigned int nb, unsigned int nb2)
{
    int i;

    i = nb;
    while(i)
    {
        if(nb % i == 0 && nb2 % i == 0)
            return (i);
        i--;
    }
    return (1);
}

int main(int ac, char **av)
{
    if(ac == 3)
        printf("%d\n", ft_pgcd(atoi(av[1]), atoi(av[2])));
}