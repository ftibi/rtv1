/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultfolly <thibaultfolly@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/29 17:43:21 by thibault          #+#    #+#             */
/*   Updated: 2016/05/29 17:47:49 by thibaultfolly    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

t_objs	*trans_move(t_objs obj, t_vec trans)
{
	obj->pos = sum_vec(obj->pos, trans);
	return (obj);
}
