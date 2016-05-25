/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_points_ray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 18:23:38 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 18:00:22 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

/*
** Vecteur norme allant du point A vers le point B
*/

t_vec	two_points_ray(t_vec a, t_vec b)
{
	t_vec	ray;

	ray.x = (a.x - b.x);
	ray.y = (a.y - b.y);
	ray.z = (a.z - b.z);
	ray = vec_normalize(ray);
	return (ray);
}
