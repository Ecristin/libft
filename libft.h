/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:03:26 by llima-da          #+#    #+#             */
/*   Updated: 2022/05/19 01:42:58 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalpha(int c);
 int ft_isdigit(int c);
 int ft_isprint(int c);
 int ft_isalnum(int c);
 int ft_isascii(int c);
 size_t ft_strlen(const char *str);
 char    *ft_strchr ( const  char *s, int c);
 void *ft_memchr(const void *s, int c, size_t n);
 int ft_memcmp(const void *s1, const void *s2, size_t n);
 void    * ft_memcpy ( void *dst, const  void *src, size_t n);
 void    *ft_memmove(void *dst, const void *src, size_t len);
 void    *ft_memset(void *b, int c, size_t len);
 size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
 size_t  ft_strlcpy ( char *dst, const  char *src, size_t dstsize);
 int ft_strncmp(const char *s1, const char *s2, size_t n);
 char *ft_strrchr(const char *str, int c);
 int ft_tolower(int c);
 int ft_toupper(int c);
 char    *ft_strnstr(const char *primeira, const char *segunda, size_t len);
 void    *ft_calloc(size_t memo, size_t size);

#endif
