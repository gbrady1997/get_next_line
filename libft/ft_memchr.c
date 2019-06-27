/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 14:11:16 by gabrady           #+#    #+#             */
/*   Updated: 2019/02/16 15:13:52 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;
	unsigned char	*s_ptr;
	size_t			i;

	c2 = (unsigned char)c;
	s_ptr = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*(s_ptr++) == (unsigned char)c)
		{
			return ((void*)--s_ptr);
		}
		i++;
	}
	return (NULL);
}
