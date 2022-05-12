/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:55:37 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 05:04:22 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

void rev_print(char *line)
{
    int i;
    int tmp;
    int l;

    i = 0;
    l = ft_strlen(line)-1;
    while(i <= l)
    {
        tmp = line[i];
        line[i] = line[l];
        line[l] = tmp;
        i++;
        l--;
    }
    write(1, line, ft_strlen(line));
}

int main(int ac, char **av)
{
    rev_print(av[1]);    
}