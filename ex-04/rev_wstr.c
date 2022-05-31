/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 04:33:50 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/29 06:16:28 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void reverse(char *s)
{
    int i;
    int j;
    int reminder;

    i = 0;
    reminder = 1;
    while(s[i] != '\0')
        i++;
    while(i >= 0)
    {
        while(s[i] == ' ' || s[i] == '\t' || s[i] == '\0')
            i--;
        j = i;
        while(j >= 0 && s[j] != ' ' && s[j] != '\t')
            j--;
        if(reminder == 0)
            write(1, " ", 1);
        reminder = 0;
        write(1, s + j + 1, i - j);
        i = j;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
}


// ======================================./4-1-rev_wstr.txt=========================================
// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in 
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the 
// begin/end of the string.

// If the number of parameters is different from 1, the program will display 
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional" 
// spaces (meaning that there won't be additionnal spaces at the beginning or at 
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
// l'indifference de celui precede mepris du temps le$
// l'indifference de celui precede mepris du temps le%
// $> ./rev_wstr "abcdefghijklm"
// abcdefghijklm
// abcdefghijklm%
// $> ./rev_wstr "il contempla le mont" | cat -e
// mont le contempla il$
// mont le contempla il%
// $> ./rev_wstr | cat -e
// $
// $>
// ==========================================================================================