/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/28 02:40:59 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Algo de tri*/

// t_stack *push_swap(t_stack *stack)
// {
// int i;
// i = ft_lstsize(stack);

// 	if(i< 100)
// 		algo1();
// 	else if(i >= 100 && i <= 500)
// 		algo2()
// 	else if (i > 500)
// 		algo3()
	
// 	t_stack *stack;
// 	int i;
// 	i = 0;
// 	while(i < 5)
// 		stack->astack[i++] = 5;
// 	return(stack);
// }

/*Message d'erreur*/

int main(int argc, char **argv)
{
	int i;
	t_stack **stack;
	stack = NULL;
	
	i = 1;
	while(argv[i] && argc != 0)
	{
		**stack = push(stack, ft_atoi(argv[i]));
		i++;
	}
	free_stack(stack);
	return(0);
}
