/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_norme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 18:31:08 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 18:00:28 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

/*
** Cette fonction renvoit un vecteur norme
*/

double	vec_norme(t_vec vec)
{
	double	norme;

	norme = sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
	return (norme);
}

t_vec	vec_normalize(t_vec vec)
{
	double	norme;

	norme = sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
	vec.x /= norme;
	vec.y /= norme;
	vec.z /= norme;
	return (vec);
}
