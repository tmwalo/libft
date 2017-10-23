/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:43:51 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/22 16:01:18 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*current_node;
	t_list		*next_node;

	current_node = *alst;
	if (del == NULL)
		return ;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		del((current_node)->content, (current_node)->content_size);
		free(current_node);
		current_node = next_node;
	}
	if (alst != NULL)
		*alst = NULL;
}
