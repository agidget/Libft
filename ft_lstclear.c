#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cl;

	if (!lst)
		return ;
	while (*lst)
	{
		cl = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cl;
	}
}
