/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:52:17 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/09 18:01:04 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int ft_atoi(const char *str);
void *ft_memset(void *b,int c,size_t len);
void *ft_calloc(size_t count, size_t size);
void	*ft_bzero(void *s,size_t n);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *str, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
void ft_striteri(char *s, void (*f)(unsigned int,char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t strlcpy( char *dst,const char *src,size_t size);
int ft_strlen( char *c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(char *s1, char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(char const *s, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int i);
#endif
