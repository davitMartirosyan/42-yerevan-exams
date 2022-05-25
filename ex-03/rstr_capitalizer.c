#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int c;
   if(ac > 1)
   {
       i = 1;
       while(i < ac)
       {
           c = 0;
           while(av[i][c])
           {
               if(av[i][c] >= 'A' && av[i][c] <= 'Z')
                    av[i][c] += 32;
                if((av[i][c] >= 'a' && av[i][c]) 
                    && (av[i][c + 1] == ' ' || av[i][c + 1] == '\t' || av[i][c + 1] == '\0'))
                    av[i][c] -= 32;
                write(1, &av[i][c], 1);
                c++;
           }
           write(1, "\n", 1);
        i++;
       }
   }
   else
    write(1, "\n", 1);

}

// Assignment name  : rstr_capitalizer
// Expected files   : rstr_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or more strings and, for each argument, puts 
// the last character of each word (if it's a letter) in uppercase and the rest
// in lowercase, then displays the result followed by a \n.

// A word is a section of string delimited by spaces/tabs or the start/end of the
// string. If a word has a single letter, it must be capitalized.

// If there are no parameters, display \n.

// Examples:

// $> ./rstr_capitalizer | cat -e
// $
// $> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
// premieR petiT tesT$
// premieR petiT tesT$
// $> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
// deuxiemE tesT uN peU moinS  facilE$
// deuxiemE tesT uN peU moinS  facilE
//    attentioN c'esT paS duR quanD memE$
//    attentioN c'esT paS duR quanD memE
// alleR uN dernieR 0123456789pouR lA routE    E $
// alleR uN dernieR 0123456789pouR lA routE    E 
// $>