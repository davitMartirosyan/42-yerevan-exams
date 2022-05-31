/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:08:56 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/31 18:35:35 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int index_of(char base[], char c)
{
    int i;
    i = -1;
    while(base[++i])
    {
        if(base[i] == c)
            return (i);
        // printf("%c | %c | %d\n", base[i], c, i);
    }
    return (0);
}

int ft_atoi_base(const  char *str, int str_base)
{
    int i;
    char base[] = "0123456789abcdef";
    int result;
    int sign;
    int index;

    sign = 1;
    i = 0;
    result = 0;
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while(str[i])
    {
        index = index_of(base, str[i]);
        result = result * str_base + index;
        i++;
    }
    return (result * sign);
}


// 1 | c //


int main(void)
{
   printf("%d", ft_atoi_base("-1c", 13));
}



// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);