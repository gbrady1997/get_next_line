/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:14:40 by gabrady           #+#    #+#             */
/*   Updated: 2019/02/18 11:51:32 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	s += len;
	while (len >= 0)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s--;
		len--;
	}
	return (NULL);
}
