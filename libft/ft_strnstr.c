/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:30:14 by gabrady           #+#    #+#             */
/*   Updated: 2019/03/02 13:56:02 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			found;

	i = -1;
	found = 1;
	if (!ft_strlen(n))
		return ((char *)h);
	while (*(h + ++i) && i < len)
	{
		j = 0;
		if (*(h + i) == *(n + 0))
		{
			k = i;
			found = 1;
			while (*(h + k) && *(n + j) && j < len && k < len)
				if (*(h + k++) != *(n + j++))
					found = 0;
			if (found && !*(n + j))
				return ((char *)h + i);
		}
	}
	return (NULL);
}
