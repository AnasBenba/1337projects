#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    if (lst)
    {
        while(lst)
        {
            lst = lst->next;
            count++;
        }
    }
    return (count);
}