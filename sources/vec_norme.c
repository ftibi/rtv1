/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_norme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 18:31:08 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/24 18:42:02 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

t_vec	vec_norme(t_vec vec)
{
	double	norme;

	norme = sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
	vec.x /= norme;
	vec.y /= norme;
	vec.z /= norme;
	return (vec);
}
