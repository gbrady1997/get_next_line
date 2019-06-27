/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 12:53:37 by gabrady           #+#    #+#             */
/*   Updated: 2019/03/02 13:03:10 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] == '\t' || s[start] == '\n' || s[start] == '\v' ||
			s[start] == '\f' || s[start] == '\r' || s[start] == ' ')
		start++;
	while (s[end - 1] == '\t' || s[end - 1] == '\n' || s[end - 1]
			== '\v' || s[end - 1] == '\f' || s[end - 1] == ' ')
		end--;
	if (end < start)
		end = start;
	new = ft_strnew(end - start);
	if (new == NULL)
		return (NULL);
	return (ft_strncpy(new, s + start, end - start));
}
