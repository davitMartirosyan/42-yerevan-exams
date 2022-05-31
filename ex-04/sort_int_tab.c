/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 06:54:37 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/29 07:27:18 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int sorted;
    int t;

    while(1)
    {
        sorted = 0;
        i = 0;
        while(i < (size - 1))
        {
            if(tab[i] > tab[i + 1])
            {
                t = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = t;
                sorted = 1;
            }
            i++;
        }
       if(sorted == 0)
        break;
    }
}


int main(void)
{
    int i = 0;
    int tab[] = {6, 32, 41, 3, 15, 41, 1, 8};
    sort_int_tab(tab, 8);
    while(i < 8)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}

// ======================================./4-3-sort_int_tab.txt=========================================
// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.
// ==========================================================================================