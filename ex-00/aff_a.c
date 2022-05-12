/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:55:40 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 02:44:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"


int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i;

        i = 0;
        while(argv[1][i])
        {
            if(argv[1][i] == 'a')
            {
                write(1, "a\n", 2);
                return (0);
            }
            i++;
        }
        write(1, "\n", 1);
        return (0);
    }
    write(1, "a\n", 2);
    return (0);
}



// Assignment name  : aff_a
// Expected files   : aff_a.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the first 'a' character it
// encounters in it, followed by a newline. If there are no 'a' characters in the
// string, the program just writes a newline. If the number of parameters is not
// 1, the program displays 'a' followed by a newline.

// Example:

// $> ./aff_a "abc" | cat -e
// a$
// $> ./aff_a "dubO a POIL" | cat -e
// a$
// $> ./aff_a "zz sent le poney" | cat -e
// $
// $> ./aff_a | cat -e
// a$

// c2r8s5% ./a.out "abc" | cat -e
// a$
// c2r8s5% ./a.out "dub0 a POIL" | cat -e
// a$
// c2r8s5% ./a.out "zz sent le poney" | cat -e
// $
// c2r8s5% ./a.out
// a
