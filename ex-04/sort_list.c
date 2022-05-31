/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:37:27 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/31 01:03:53 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../includes/examrank.h"
#include <stdio.h>
#include <stdlib.h>
#include "sort_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *p;
    t_list *ret;
    int tmp;

    ret = lst;
    while(lst)
    {
        p = lst->next;
        while(p)
        {
            if(cmp(lst->data, p->data) == 0)
            {
                tmp = lst->data;
                lst->data = p->data;
                p->data = tmp;
            }
            p = p->next;
        }
        lst = lst->next;
    }
    return (ret);
}
int cmp(int a, int b)
{
    return (a <= b);
}

int main(void)
{
    t_list *node;
    node = (t_list *)malloc(sizeof(t_list));
    node->data = 5;
    node->next = (t_list *)malloc(sizeof(t_list));
    node->next->data = 2;
    node->next->next = (t_list *)malloc(sizeof(t_list));
    node->next->next->data = 10;
    node->next->next->next = NULL;
    printf("%d | ", node->next->data);   
    printf("%d", sort_list(node, cmp)->next->data);   
}

//2 5 10