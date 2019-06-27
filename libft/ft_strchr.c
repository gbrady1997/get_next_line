/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 10:19:28 by gabrady           #+#    #+#             */
/*   Updated: 2019/02/18 10:44:38 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if ((char)c == '\0')
	{
		while (*s)
			s++;
		return ((char*)s);
	}
	else
	{
		while (*s)
		{
			if (*s == (char)c)
				return ((char*)s);
			s++;
		}
	}
	return (NULL);
}
