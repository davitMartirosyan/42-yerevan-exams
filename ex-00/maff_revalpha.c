/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:20:35 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 03:23:05 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void maff_revalpha(void)
{
    int odd;
    int even;

    odd = 'Y';
    even = 'z';
    while(odd >= 'A')
    {
        write(1, &even, 1);
        write(1, &odd, 1);
        odd -= 2;
        even -= 2;
    }
    return ;
}

int main(void)
{
    maff_revalpha();
}