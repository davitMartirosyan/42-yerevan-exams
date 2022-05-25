#include <unistd.h>
#include <stdio.h>
// ======================================./3-1-tab_mult.txt=========================================
// Assignment name  : tab_mult
// Expected files   : tab_mult.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays a number's multiplication table.

// The parameter will always be a strictly positive number that fits in an int,
// and said number times 9 will also fit in an int.

// If there are no parameters, the program displays \n.

// Examples:

// $>./tab_mult 9
// 1 x 9 = 9
// 2 x 9 = 18
// 3 x 9 = 27
// 4 x 9 = 36
// 5 x 9 = 45
// 6 x 9 = 54
// 7 x 9 = 63
// 8 x 9 = 72
// 9 x 9 = 81
// $>./tab_mult 19
// 1 x 19 = 19
// 2 x 19 = 38
// 3 x 19 = 57
// 4 x 19 = 76
// 5 x 19 = 95
// 6 x 19 = 114
// 7 x 19 = 133
// 8 x 19 = 152
// 9 x 19 = 171
// $>
// $>./tab_mult | cat -e
// $
// $>
// ==========================================================================================

void p_nbr(int n)
{
    if(n > 9)
        p_nbr(n / 10);
    n = n % 10 + '0';
    write(1, &n, 1);
}
int ft_atoi(char *n)
{
    int i;
    int c;

    i = 0;
    c = 0;
    while(n[i])
    {
        c = (c * 10) + (n[i] - '0');
        i++;
    }
    return (c);
}

int main(int ac, char **av)
{
    int mult;
    int c;
    if(ac == 2)
    {
        c = 1;
        mult = ft_atoi(av[1]);
        while(c <= 9)
        {
            p_nbr(c);
            write(1, " x ", 3);
            p_nbr(mult);
            write(1, " = ", 3);
            p_nbr(c * mult);
            write(1, "\n", 1);
            c++;
        }
    }
}