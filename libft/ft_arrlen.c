/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonslee <yoonslee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:35:31 by yoonslee          #+#    #+#             */
/*   Updated: 2023/11/03 10:37:25 by yoonslee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief calculate the length of double array
 * 
 * @param array array that you want the length of
 * @return int length of array
 */
int	ft_arrlen(char **array)
{
	int	counter;

	counter = 0;
	while (*array)
	{
		counter++;
		array++;
	}
	return (counter);
}
