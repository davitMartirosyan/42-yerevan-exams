# ifndef EXAMRANK_H
# define EXAMRANK_H

#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

int     datoi(char *toatoi);
void    inter(char *s1, char *s2);
void	print(char *string, int *ascii);
void	print_union(char *s1, char *s2);
int     atoi_base(char *toint, int base);
char    *ft_strdup(char *src);
#endif