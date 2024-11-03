/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:20:42 by abenba            #+#    #+#             */
/*   Updated: 2024/11/01 14:42:34 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*ft_deli(t_list *new_head, void (*del)(void *))
{
	t_list	*check;
	while (new_head)
	{
		check = new_head;
		(*del)(check->content);
		new_head = check->next;
		free(check);
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_head;
	t_list	*check;

	new_head = NULL;
	if (lst && f && del)
	{
		ptr = lst;
		new_head = ft_lstnew((*f)(ptr->content));
		if (!new_head)
			return (NULL);
		ptr = ptr->next;
		while (ptr)
		{
			check = ft_lstnew((*f)(ptr->content));
			if (!check)
				return (ft_deli(new_head, del));
			ft_lstadd_back(&new_head, check);
			ptr = ptr->next;
		}
	}
	return (new_head);
}
