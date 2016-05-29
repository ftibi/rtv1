/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_objs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/29 17:35:09 by thibault          #+#    #+#             */
/*   Updated: 2016/05/29 18:28:32 by thibaultfolly    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

// Pour les deplacements normaux, c'est assez direct
// Pour les rotations autour de la scene je vais devoir reflechir un peu

t_objs	*move_objs(t_objs *objs, t_vec translation, t_vec rotation)  // matrice de rotation plutot ??
{
	t_objs	*start;

	start = objs;
	while (objs)
	{
		objs = trans_move(objs, translation);
		objs = rot_move(objs, rotation); // ok mb not do it like this, prob one fucntion per move
		objs = objs->next;
	}
	return (start);
}
