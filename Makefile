# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdeathlo <jdeathlo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 19:48:19 by jdeathlo          #+#    #+#              #
#    Updated: 2020/02/29 15:39:29 by jdeathlo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -std=c99 -Wall -Werror -Wextra

INCLUDE = include/

SRC =
SRCDIR = src/

_SRCDIR_FT = ft/
_SRC_FT = \
	itoa.c \
	strjoin.c \
	strnew.c \
	ufputc.c \
	ufputn.c \
	ufputs.c \
	ufputsn.c \
	ugetline.c \
	uputc.c \
	uputn.c \
	uputs.c \
	uputsn.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT), $(_SRC_FT)))

_SRCDIR_FT_CTYPE = ft_ctype/
_SRC_FT_CTYPE = \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isblank.c \
	ft_iscntrl.c \
	ft_isdigit.c \
	ft_isgraph.c \
	ft_islower.c \
	ft_isprint.c \
	ft_ispunct.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_isxdigit.c \
	ft_toascii.c \
	ft_tolower.c \
	ft_toupper.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_CTYPE), $(_SRC_FT_CTYPE)))

_SRCDIR_FT_STDIO = ft_stdio/
_SRC_FT_STDIO = \
	ft_asprintf.c \
	ft_fprintf.c \
	ft_fputc.c \
	ft_fputs.c \
	ft_fscanf.c \
	ft_printf.c \
	ft_putc.c \
	ft_puts.c \
	ft_scanf.c \
	ft_snprintf.c \
	ft_sprintf.c \
	ft_sscanf.c \
	ft_vasprintf.c \
	ft_vprintf.c \
	ft_vscanf.c \
	ft_vsprintf.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_STDIO), $(_SRC_FT_STDIO)))

_SRCDIR_FT_STDLIB = ft_stdlib/
_SRC_FT_STDLIB = \
	ft_a64l.c \
	ft_abs.c \
	ft_atoi.c \
	ft_atol.c \
	ft_atoll.c \
	ft_calloc.c \
	ft_div.c \
	ft_l64a.c \
	ft_labs.c \
	ft_ldiv.c \
	ft_llabs.c \
	ft_lldiv.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_STDLIB), $(_SRC_FT_STDLIB)))

_SRCDIR_FT_STRING = ft_string/
_SRC_FT_STRING = \
	ft_bcmp.c \
	ft_bcopy.c \
	ft_bzero.c \
	ft_ffs.c \
	ft_ffsl.c \
	ft_ffsll.c \
	ft_fls.c \
	ft_flsl.c \
	ft_flsll.c \
	ft_index.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_mempcpy.c \
	ft_memrchr.c \
	ft_memset.c \
	ft_rindex.c \
	ft_stpcpy.c \
	ft_stpncpy.c \
	ft_strcasecmp.c \
	ft_strcasestr.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strchrnul.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strcspn.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncasecmp.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strndup.c \
	ft_strnlen.c \
	ft_strnstr.c \
	ft_strpbrk.c \
	ft_strrchr.c \
	ft_strsep.c \
	ft_strspn.c \
	ft_strstr.c \
	ft_strtok.c \
	ft_strxfrm.c \
	ft_swab.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_STRING), $(_SRC_FT_STRING)))

_SRCDIR_FT_UNISTD = ft_unistd/
_SRC_FT_UNISTD = \
	ft_getopt.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_UNISTD), $(_SRC_FT_UNISTD)))

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDE) -o $@ -c $<

$(NAME): $(OBJ)
	$(AR) rucsv $@ $?

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
