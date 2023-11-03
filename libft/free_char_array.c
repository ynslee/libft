/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_char_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonslee <yoonslee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:35:25 by yoonslee          #+#    #+#             */
/*   Updated: 2023/11/03 10:36:04 by yoonslee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief frees the double str
 */
void	free_char_array(char **str)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		if (str[i])
		{
			free(str[i]);
			str[i] = NULL;
		}
		i++;
	}
	if (str)
	{
		free(str);
		str = NULL;
	}
}
