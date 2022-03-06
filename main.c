/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:18:50 by yschecro          #+#    #+#             */
/*   Updated: 2022/02/28 17:44:56 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_print_stack(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!temp)
	{
		printf("(null)\n");
		return ;
	}
	printf("%d -> ", temp->content);
	ft_print_stack(lst->next);
	return ;
}

void fonction(t_list **stack, char **argyo, int n_arg)
{
	int	i;

	i = 0;
	stack = malloc(sizeof(t_list *) * n_arg);
	if (!stack)
		return ;
	*stack = ft_lstnew(atoi(argyo[++i]));
	while (argyo[++i])
	{
		ft_lstadd_back(stack, atoi(argyo[i]));
//		printf("_%d_ -> ", (*stack)->content);
		printf("_%s_", argyo[i]);
	}
}

int main(int ac, char **av)
{
	int		*tab;
	t_list	*stack_a;

	tab = NULL;
	stack_a = NULL;
	if (ac < 2)
		return (printf("not enough arg\n"));
	if (ac >= 2)
		fonction(&stack_a, av, ac);
	ft_print_stack(stack_a);
	return (0); 
}
