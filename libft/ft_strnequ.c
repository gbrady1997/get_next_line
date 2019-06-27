/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 15:55:49 by gabrady           #+#    #+#             */
/*   Updated: 2019/02/25 11:35:49 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int cmp;

	if (!s2 || !s1)
		return (0);
	cmp = ft_strncmp(s1, s2, n);
	if (cmp == 0)
		return (1);
	else
		return (0);
}
