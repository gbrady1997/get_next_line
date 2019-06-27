/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 16:12:46 by gabrady           #+#    #+#             */
/*   Updated: 2019/02/25 11:33:03 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	new = malloc(len + 1);
	new[len] = '\0';
	if (new == NULL)
		return (NULL);
	while (s[start] != '\0' && len--)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	return (new);
}
