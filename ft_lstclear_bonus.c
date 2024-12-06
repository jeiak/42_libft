/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:44:46 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/04 12:50:54 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (!del || !lst || !*lst)
		return ;
	while (*lst && lst)
	{
		a = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
}
