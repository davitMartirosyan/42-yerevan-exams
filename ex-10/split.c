#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int len(char *str)
{
    int i;

    i = 0;
    while(*str)
    {
        str++;
        i++;
    }
    return (i);
}

char **split(char *s)
{
    char **slice;
    int i = 0;
    int j = 1;
    int c = 0;
    int words[len(s)];
    while(s[i])
    {
        if(s[i] == ' ' || s[i] == '\t' || s[i+1] == '\0')
        {
            words[c++] = i - j;
            j = i;
        }
        ++i;
    }
    words[0] += 2;
    words[c] += 1;
    if(!(slice = (char **)malloc(sizeof(char *) * (c + 1))))
        return (NULL);
    j = -1;
    i = 0;
    while(++j < c)
    {
        slice[j] = (char *)malloc(sizeof(char) * words[j]);
        int z = -1;
        while(++z < words[j])
        {
            if(s[i] == ' ' || s[i] == '\t' || s[i] == '\0')
            {
                i++;
                continue;
            }
            slice[j][z] = s[i++];
        }
    }
    return (slice);
}

int main(void)
{
    char **a = split("Thiss is a new stringgg about myself");
    int i = 0;
    while(a[i])
    {
        printf("%s\n", a[i]);
        i++;
    }
}