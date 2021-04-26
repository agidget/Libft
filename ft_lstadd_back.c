#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*old;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	old = *lst;
	while (old->next)
		old = old->next;
	new->next = NULL;
	old->next = new;
}
