/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:41:22 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 17:49:23 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

    typedef struct s_list
    {
    void *content;
    struct s_list *next;
    } t_list;
    
    int ft_atoi(const char *str);
    void ft_bzero(void *s, size_t n);
    void *ft_calloc(size_t count, size_t size);
    int ft_isalnum(int c);
    int ft_isalpha(int c);
    int ft_isascii(int c);
    int ft_isdigit(int c);
    int ft_isprint(int c);
    void *ft_memchr(const void *s, int c, size_t n);
    int ft_memcmp(const void *s1, const void *s2, size_t n);
    void *ft_memcpy(void *dst, const void *src, size_t n);
    void *ft_memmove(void *dst, const void *src, size_t n);
    void *ft_memset(void *b, int c, size_t len);
    char* ft_strchr (const char* s, int c);
    char *ft_strdup(const char *s1);
    size_t ft_strlcat(char *dest, const char *src, size_t size);
    size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
    size_t ft_strlen(const char *s);
    int ft_strncmp(const char *s1, const char *s2, size_t n);
    char *ft_strnstr(const char *haystack, const char *needle, size_t len);
    char *ft_strrchr(const char *s, int c);
    int ft_tolower(int c);
    int ft_toupper(int c);
    char *ft_substr(char const *s, unsigned int start, size_t len);
    char *ft_itoa(int n);
    void ft_putstr_fd(char *s, int fd);
    t_list *ft_lstnew(void *content);

    int ft_lstsize(t_list *lst);
    void ft_lstdelone(t_list *lst, void (*del)(void*));

    void ft_lstadd_back(t_list **lst, t_list *new);

    void ft_lstclear(t_list **lst, void (*del)(void*));


#endif