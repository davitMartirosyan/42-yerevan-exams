/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:47:10 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 03:56:41 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void print_number(int number)
{
    if(number > 9)
        print_number(number / 10);
    write(1, &"0123456789"[number % 10], 1);
}

void fizbuzz(void)
{
    int start;

    start = 0;
    while(start <= 100)
    {
        if(start % 3 == 0 && start % 5 == 0)
            write(1, "fizbuzz", 8);
        else if((start % 3) == 0)
            write(1, "fizz", 4);
        else if((start % 5) == 0)
            write(1, "buzz", 4);
        else
            print_number(start);
        write(1, "\n", 1);
        start++;
    }
}

int main(void)
{
    fizbuzz();
}