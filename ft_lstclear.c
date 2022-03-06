/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:29:55 by yschecro          #+#    #+#             */
/*   Updated: 2022/02/28 16:10:44 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list	*ptr;

	if (!del || !alst || !*alst)
		return ;
	while (*alst && alst)
	{
		ptr = (*alst)->next;
		ft_lstdelone(*alst, del);
		*alst = ptr;
	}
	return ;
}
