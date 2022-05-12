/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:16:36 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 03:19:57 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void maff_alpha(void)
{
    int even;
    int odd;

    even = 'B';
    odd = 'a';
    while(even <= 'Z')
    {
        write(1, &odd, 1);
        write(1, &even, 1);
        even += 2;
        odd += 2;
    }
    return ;
}

int main(void)
{
    maff_alpha();
}