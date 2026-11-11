/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asso <ael-asso@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:27:04 by ael-asso          #+#    #+#             */
/*   Updated: 2026/11/11 17:39:12 by ael-asso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void	(*del)(void *))
{
	t_list	*nlst;
	t_list	*nobj;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		nobj = ft_lstnew(tmp);
		if (!nobj)
		{
			del(tmp);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nobj);
		lst = lst->next;
	}
	return (nlst);
}
