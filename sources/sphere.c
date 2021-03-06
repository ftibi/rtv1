/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 16:53:48 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 17:03:14 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

/*
** Collision pour sphere
** on va utiliser une solution analytique
** ca revient a resoudre un polynome du second degre
** Cette fonction retourne un pointeur vers le vecteur qui pointe sur
** l'intersection
** pt et ray representent le point sur le plan image et le rayon qui en est issu
*/

t_vec		*sphere(t_objs *sphere, t_vec pt, t_vec ray)
{
	double	delta;
	double	a;
	double	b;
	double	c;
	t_vec	*inter;
	double	t1;
	double	t2;

	a = 1;
	b = 2 * produit_scalaire(ray, sub_vec(pt, sphere->pos));
	c = pow(vec_norme(sub_vec(pt, sphere->pos)), 2) - pow(sphere->size, 2);
	delta = b * b - 4 * a * c;
	if (delta < 0)
		return (0);
	if (!(inter = (t_vec*)ft_memalloc(sizeof(t_vec))))
		return (0);
	if (delta == 0)
		t1 = -b / (2 * a);
	else
	{
		t1 = -b - sqrt(delta) / (2 * a);
		t2 = -b + sqrt(delta) / (2 * a);
		if (t2 > t1)
			t1 = t2;
	}
	inter->x = pt.x + t1 * ray.x;
	inter->y = pt.y + t1 * ray.y;
	inter->z = pt.z + t1 * ray.z;
	return (inter);
}
