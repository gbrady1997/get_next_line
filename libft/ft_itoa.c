/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:50:52 by gabrady           #+#    #+#             */
/*   Updated: 2019/03/02 12:59:31 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int value)
{
	char			*res;
	int				idx;
	unsigned int	carry;

	carry = (value > 0) ? value : -value;
	idx = (value < 0) ? 2 : 1;
	while (carry /= 10)
		idx++;
	carry = (value > 0) ? value : -value;
	if (!(res = ft_strnew(idx)))
		return (NULL);
	res[0] = (value < 0) ? '-' : '0';
	while (carry)
	{
		res[--idx] = carry % 10 + 48;
		carry /= 10;
	}
	return (res);
}
