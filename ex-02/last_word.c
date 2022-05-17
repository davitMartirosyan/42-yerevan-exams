/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:55:47 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/17 01:14:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

size_t  ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}
int space(char c)
{
    if(c == ' ' || c == '\t')
        return (1);
    return (0);
}
void last_word(char *str)
{
    size_t l;

    l = ft_strlen(str) - 1;
    while(space(str[l]))
        l--;
    while(!space(str[l]))
        l--;
    l++;
    while(str[l] && !space(str[l]))
    {
        write(1, &str[l], 1);
        l++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
      last_word(av[1]);
    }
    write(1, "\n", 1);
}

FDY1392458