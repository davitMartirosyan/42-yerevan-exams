/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:57:40 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 03:59:07 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void ft_putstr(char *string)
{
    while(*string)
    {
        write(1, string, 1);
        string++;
    }
    return ;
}
int main(void)
{
    ft_putstr("hello World");
}