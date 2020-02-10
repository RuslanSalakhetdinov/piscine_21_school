/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwheatgr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:50:29 by cwheatgr          #+#    #+#             */
/*   Updated: 2020/02/10 15:55:43 by cwheatgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_form		*form_new(char **buf, char symbol)
{
	t_form	*new;
	int		row;
	int		num;


	row = 0;
	if (!(new = (t_form*)malloc(sizeof(new))))
		return (NULL);
	while (num < 20)
	{
		if (buf[num] == '#')
		{
			new->pos[row][0] = (num >= 5) ? (i % 5) : i;
			new->pos[row][1] = i / 5;
			row++;
		}
		num++;
	}
}
new->symbol = symbol;
new->x_base = 0;
new->y_base = 0;
return (form_alignment(new));
