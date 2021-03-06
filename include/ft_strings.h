/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:21:49 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/15 18:27:47 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H

# include <stddef.h>

int		ft_strcasecmp(const char *a, const char *b);
int		ft_strncasecmp(const char *a, const char *b, size_t c);

# if defined(_GNU_SOURCE) || defined(_BSD_SOURCE) || defined(_POSIX_SOURCE)
#  if defined(_POSIX_C_SOURCE) && _POSIX_SOURCE + 0 < 200809L
#   if defined(_XOPEN_SOURCE) && _XOPEN_SOURCE + 0 < 700

int		ft_bcmp(const void *a, const void *b, size_t c);
void	ft_bcopy(const void *a, void *b, size_t c);
void	ft_bzero(void *a, size_t b);
char	*ft_index(const char *a, int b);
char	*ft_rindex(const char *a, int b);

#   endif
#  endif
# endif

# if defined(_XOPEN_SOURCE) || defined (_GNU_SOURCE) || defined(_BSD_SOURCE)

int		ft_ffs(int a);

# endif

# if defined (_GNU_SOURCE) || defined(_BSD_SOURCE)

int		ft_ffsl(long a);
int		ft_ffsll(long long a);
int		ft_fls(int a);
int		ft_flsl(long a);
int		ft_flsll(long long a);

# endif

#endif
