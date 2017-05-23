/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:39:53 by afanneau          #+#    #+#             */
/*   Updated: 2016/11/03 19:41:15 by afanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tabint;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	if ((tabint = malloc((max - min) * sizeof(int))) != NULL)
	{
		while ((i + min) < max)
		{
			tabint[i] = min + i;
			i++;
		}
		return (tabint);
	}
	else
		return (NULL);
}
