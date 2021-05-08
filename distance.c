/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:38:53 by agirona           #+#    #+#             */
/*   Updated: 2021/05/08 16:23:39 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

int		main(void)
{
	int		ox = 12;
	int		oy = 5;
	int		px = 7;
	int		py = 5;
	int		lx = 7;
	int		ly = 10;
	float	op = 0;
	float	ol = 0;
	float	pl = 0;
	float	angle = 0;

	op = sqrt(pow(ox - px, 2) + pow(oy - py, 2));
	dprintf(1, "distance op = %f\n", op);

	ol = sqrt(pow(ox - lx, 2) + pow(oy - ly, 2));
	dprintf(1, "distance ol = %f\n", ol);

	pl = sqrt(pow(px - lx, 2) + pow(py - ly, 2));
	dprintf(1, "distance pl = %f\n", pl);

	angle = pow(op, 2) + pow(pl, 2) - pow(ol, 2);
	angle = angle / (2 * op * pl);
	angle = acosf(angle);

	dprintf(1, "Angle OPL = %f", angle * 180 / M_PI);
	return (1);
}
