/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultfolly <thibaultfolly@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/29 18:01:01 by thibault          #+#    #+#             */
/*   Updated: 2016/05/29 18:16:00 by thibaultfolly    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

t_mat	mat_rot_x(double angle)
{
	t_mat	mat;

	mat->xx = 1;
	mat->xy = 0;
	mat->xz = 0;
	mat->yx = 0;
	mat->yy = cos(angle);
	mat->yz = -sin(angle);
	mat->zx = 0;
	mat->zy = sin(angle);
	mat->zz = cos(angle);
}

t_mat	mat_rot_y(double angle)
{
	t_mat	mat;

	mat->xx = cos(angle);
	mat->xy = 0;
	mat->xz = sin(angle);
	mat->yx = 0;
	mat->yy = 1;
	mat->yz = 0;
	mat->zx = -sin(angle);
	mat->zy = 0;
	mat->zz = cos(angle);
}

t_mat	mat_rot_z(double angle)
{
	t_mat	mat;

	mat->xx = cos(angle);
	mat->xy = -sin(angle);
	mat->xz = 0;
	mat->yx = sin(angle);
	mat->yy = cos(angle);
	mat->yz = 0;
	mat->zx = 0;
	mat->zy = 0;
	mat->zz = 1;
}

t_vec	mat_mult(t_mat mat, t_vec vec)
{
	t_vec	res;

	res->x = mat->xx * vec->x + mat->xy * vec->y + mat->xz * vec->z;
	res->y = mat->yx * vec->x + mat->yy * vec->y + mat->yz * vec->z;
	res->z = mat->zx * vec->x + mat->zy * vec->y + mat->zz * vec->z;
	return (res);
}
