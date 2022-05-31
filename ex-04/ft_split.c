/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:56:49 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/31 22:12:11 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_space(char s)
{
    if(s == ' ' || s == '\t' || s == '\0')
        return (1);
    return (0);
}

int words(char *s)
{
    int i;
    int c;
    i = 0;
    c = 0;
    while(s[i])
    {
        if(is_space(s[i + 1]))
            c++;
        i++;
    }
    return (c);
}

char *push(char *str, int s, int c)
{
    char *word;
    int i = 0;
    if(!(word = (char *)malloc(sizeof(char) * (c + 1))))
        return (NULL);
    while(i < c && str[s + i] != '\0')
    {
        word[i] = str[s + i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

int chars(char *str)
{
    int i = 0;
    while(str[i] && !is_space(str[i]))
        i++;
    return (i);
}
int start(char *str)
{
    int i;
    
    i = 0;
    while(str[i] && is_space(str[i]))
        i++;
    return (i);    
}

char **ft_split(char *str)
{
    char **array;
    int word;
    int a = 0;
    int c = 0;
    int s = 0;
    word = words(str);
    if(!(array = (char **)malloc(sizeof(char *) * (word + 1))))
        return (NULL);
    while(a <= word)
    {
        s = start(str);
        c = chars(str + s);
        array[a] = push(str, s, c);
        str = s + c + str;
        a++;
    }
    return (array);
}

int main(void)
{
    char **split = ft_split("hello world wide web w3school alo");
    printf("%s\n", split[0]);
    printf("%s\n", split[1]);
    printf("%s\n", split[2]);
    printf("%s\n", split[3]);
    printf("%s\n", split[4]);
    printf("%s\n", split[5]);
}

// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);