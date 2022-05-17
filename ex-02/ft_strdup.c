/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:46:25 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/16 23:53:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"
#include <stdlib.h>

size_t  ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    char *dup;
    
    if(!src)
        return (NULL);

    dup = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
    if(!dup)
        return (NULL);
    i = 0;
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main(void)
{
    char *a = "hello world";
    printf("%s", ft_strdup(a));
}