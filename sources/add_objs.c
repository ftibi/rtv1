/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_objs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 18:50:43 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 19:52:45 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

/*
** Pushback pour des objs
*/

t_objs	*add_objs(int color, int type, int size, t_vec pos, t_vec vec, t_objs *objs)
{
	t_objs	*new;
	t_objs	*tmp;

	if (!(new = (t_objs*)ft_memalloc(sizeof(t_objs))))
		return (0);
	new->size = size;
	new->color = color;
	new->type = type;
	new->pos = pos;
	new->vec = vec;
	new->next = 0;
	if (!objs)
		return (new);
	tmp = objs;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (objs);
}
