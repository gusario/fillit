/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 20:06:58 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/11 17:35:58 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_dblist	*createdblist(void)
{
	t_dblist *tmp;

	tmp = (t_dblist*)malloc(sizeof(t_dblist));
	tmp->size = 0;
	tmp->head = NULL;
	tmp->tail = NULL;
	return (tmp);
}

void		deletedblinkedlist(t_dblist **list)
{
	t_dlist *tmp;
	t_dlist *next;

	next = NULL;
	tmp = (*list)->head;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	free(*list);
	(*list) = NULL;
}

void		ft_dlst_pushback(t_dblist *root, t_myfill function)
{
	t_dlist *tmp;

	if (!(tmp = (t_dlist *)malloc(sizeof(t_dlist))))
		return ;
	tmp->func = function;
	tmp->next = NULL;
	tmp->prev = root->tail;
	if (root->tail)
		root->tail->next = tmp;
	root->tail = tmp;
	if (root->head == NULL)
		root->head = tmp;
	root->size++;
}

void		push(t_maplist **head, char **mapa, int i, int j)
{
	t_maplist *tmp;

	tmp = (t_maplist*)malloc(sizeof(t_maplist));
	tmp->map = mapa;
	tmp->i = i;
	tmp->j = j;
	tmp->next = (*head);
	(*head) = tmp;
}

void		pop(t_maplist **head, int side)
{
	t_maplist *prev;

	if (head == NULL)
		return ;
	prev = (*head);
	(*head) = (*head)->next;
	feel_free(prev->map, side);
	free(prev);
}
