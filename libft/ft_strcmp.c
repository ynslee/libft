/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonslee <yoonslee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:17:42 by yoonslee          #+#    #+#             */
/*   Updated: 2023/11/03 12:24:43 by yoonslee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*return 0 if two strings are same*/
int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (st1[i] && st2[i] && st1[i] == st2[i])
	{
		if (st1[i] != st2[i])
		{
			return (st1[i] - st2[i]);
		}
		i++;
	}
	return (st1[i] - st2[i]);
}
