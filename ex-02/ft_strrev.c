/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 06:55:41 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/17 07:20:12 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"
#include <stdlib.h>
size_t  len(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    size_t e;
    size_t s;
    char tmp;

    e = len(str) - 1;
    s = 0;
    while(s < e)
    {
        tmp = str[s];
        str[s] = str[e];
        str[e] = tmp;
        e--;
        s++;
    }
    return (str);
}

// void	__rev__(char *hex, int at, int len)
// {
// 	char	t;

// 	while (at < len)
// 	{
// 		t = hex[at];
// 		hex[at] = hex[len];
// 		hex[len] = t;
// 		at++;
// 		len--;
// 	}
// }

int main(void)
{
    char *a = (char *)malloc(sizeof(char) * 6);
    printf("%s", ft_strrev(a));
}