/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:15:52 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 04:17:34 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str)
    {
        i++;
        str++;
    }
    return (i);
}

int main(void)
{
    char a[] = "hello     ";
    printf("%d", ft_strlen(a));
}