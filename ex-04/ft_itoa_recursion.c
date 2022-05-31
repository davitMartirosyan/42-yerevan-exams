/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_recursion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 06:05:31 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/31 06:24:07 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int num_len(int n)
{
    int i;

    i = 0;
    if(n < 0)
    {
        n *= -1;
        i = 1;
    }
    while(n)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int nbr)
{
    char *result;
    int i;

    i = 0;
    result = (char *)malloc(sizeof(char) * (num_len(nbr) + 1));
    if(!result)
        return (NULL);   
    if(nbr < 0)
    {
        nbr *= -1;
        // printf("%c", '-');
        result[i++] = '-';
    }
    if(nbr > 9)
    {
        result[i++] = ft_itoa(nbr / 10);
    }
    result[i++] = nbr % 10 + '0';
    //printf("%c", nbr % 10 + '0');   
    result[i] = '\0';
    return (result);
}

int main(void)
{
    printf("%s", ft_itoa(-1253));
    // printf("%d", num_len(-50));
}