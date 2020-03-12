/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unistd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:50:08 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 01:12:03 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNISTD_H
# define FT_UNISTD_H

# include <unistd.h>

int		ft_getopt(int a, char *const *b, const char *c);

char	*g_optarg;
int		g_opterr;
int		g_optind;
int		g_optopt;
int		g_optreset;

#endif
