/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:35:32 by afanneau          #+#    #+#             */
/*   Updated: 2016/11/02 17:42:56 by afanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	x;
	char	p;

	p = 'P';
	x = 'N';
	if (n >= 0)
		ft_putchar(p);
	else
		ft_putchar(x);
}
