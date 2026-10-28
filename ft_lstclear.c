#include "libft.h"
#include<stdlib.h>
void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;
	t_list *next;
	if(!lst || !del)
		return;
	while (*lst)
	{
		current = *lst;
		next = current->next;
		del(current->content);
		free(current);
		*lst = next;
	}
}
