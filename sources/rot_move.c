/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultfolly <thibaultfolly@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/29 17:44:13 by thibault          #+#    #+#             */
/*   Updated: 2016/05/29 18:20:14 by thibaultfolly    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

/*
** Peut etre faire la rotation autour du premier objet de la scene ?
** Ou rotation autour de la camera ? -> plus facile car coordonnees d'origine
** sont celles du plan image !
*/

t_objs	rot_move(t_objs *obj, t_mat rot)
{
	obj->vec = mat_mult(mat, obj->vec);
	return (obj);
}
