#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>


typedef unsigned char t_char;
typedef unsigned int    t_int;


// char                          *strcpy(char *dst, char *src);
size_t                          ft_strlen(const char *s);
int                             ft_isdigit(int c);
int                             ft_isalpha(int c);
int                             ft_isalnum(int c);
int                             ft_isascii(int c);
int                             ft_isdigit(int c);
int                             ft_isprint(int c);
char                             *ft_strcat(char *s1, const char *s2);
char	                         *ft_strchr(const char *s, char c);
int		                        ft_strcmp(const char *s1, const char *s2);
char	                         *ft_strcpy(char *dst, const char *src);
size_t                          ft_strlcat(char *restrict dst,const char *restrict src, size_t dstsize);
size_t                          ft_strlen(const char *s);
int		                        ft_strncmp(const char *s1, const char *s2, size_t n);
char                             *ft_strncpy(char *dst, const char *src, size_t len);
size_t                         ft_strlen(const char *s);
char	                         *ft_strrchr(const char *s, int c);
char	                            *ft_strstr(const char *haystack, const char *needle);
void                            ft_putchar(char c);
void                            ft_putnbr(int nb);
#endif