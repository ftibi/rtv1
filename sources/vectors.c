/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 20:36:36 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/24 20:45:11 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

/*
** Recoder moi meme les operations sur les vecteurs
** addition, soustraction, produit scalaire
*/

double	produit_scalaire(t_vec a, t_vec b)
{
	double res;

	res = a.x * b.x + a.y * b.y + a.z * b.z;
	return (res);
}

t_vec	sum_vec(t_vec a, t_vec b)
{
	t_vec	res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;
	res.z = a.z + b.z;
	return (res);
}

t_vec	sub_vec(t_vec a, t_vec b)
{
	t_vec	res;

	res.x = a.x - b.x;
	res.y = a.y - b.y;
	res.z = a.z - b.z;
	return (res);
}
