#include "libft.h"
#include<stdio.h>
#include<stdlib.h>
void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}
int main()
{
	 t_list *lst;
    t_list *node1;
    int a;
    int b;

    a = 10;
    b = 20;
    lst = ft_lstnew(&a);
    node1 = ft_lstnew(&b);
    if (!lst || !node1)
        return (1);
    ft_lstadd_front(&lst, node1);
    printf("%d\n", *(int *)lst->content);
    printf("%d\n", *(int *)lst->next->content);
    free(node1);
    free(lst);
    return (0);
}
