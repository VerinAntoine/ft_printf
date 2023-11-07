/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:36:57 by averin            #+#    #+#             */
/*   Updated: 2023/08/11 21:59:02 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*crt;
	t_list	*next;

	if (!lst || !del)
		return ;
	crt = *lst;
	while (crt)
	{
		next = crt->next;
		ft_lstdelone(crt, del);
		crt = next;
	}
	*lst = NULL;
}
