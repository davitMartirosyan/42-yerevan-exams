/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:00:13 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 04:15:13 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
    if(!s1 || !s2)
        return (NULL);
    while(*s2)
        *s1++ = *s2++;
    *s1 = '\0';
    return (s1);
}

int main(void)
{
    char a[12] = "hello world";
    char b[12];
    ft_strcpy(b, a);
    printf("%s", b);
}