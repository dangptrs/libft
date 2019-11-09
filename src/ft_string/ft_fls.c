/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fls.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:29:24 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:47:35 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fls(int mask)
{
	int	bit;

	if (!mask)
		return (0);
	bit = 1;
	while (mask != 1)
	{
		mask >>= 1;
		bit++;
	}
	return (bit);
}