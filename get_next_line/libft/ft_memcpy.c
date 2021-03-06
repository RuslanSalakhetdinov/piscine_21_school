/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwheatgr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:39:41 by cwheatgr          #+#    #+#             */
/*   Updated: 2019/09/24 21:39:56 by cwheatgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*buf_src;
	unsigned char		*buf_dst;

	buf_src = (const unsigned char*)src;
	buf_dst = (unsigned char*)dst;
	if (!n || dst == src)
		return (dst);
	while (n--)
		*buf_dst++ = *buf_src++;
	return (dst);
}
