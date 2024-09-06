/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:51:31 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/23 14:58:30 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;
	void	*inside;

	if (!lst)
		return (0);
	new = 0;
	while (lst)
	{
		inside = f(lst->content);
		elem = ft_lstnew(inside);
		if (!elem)
		{
			del(inside);
			ft_lstclear(&new, *del);
			return (0);
		}
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
