/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwheatgr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:35:15 by cwheatgr          #+#    #+#             */
/*   Updated: 2019/09/23 23:36:58 by cwheatgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n && *s1)
		if (ft_memcmp(&s1[i], &s2[i], 1))
			return (ft_memcmp(&s1[i], &s2[i], 1));
	return (0);
}
