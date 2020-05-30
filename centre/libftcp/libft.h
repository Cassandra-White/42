

#ifndef __LIBFT_H__
#define __LIBFT_H__

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>


typedef    struct        s_list
{
	void            *content;
	struct s_list    *next;
}                    t_list;


void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
int	ft_atoi(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy( void *destination, const void *source, size_t size );
void	*ft_memccpy(void *dest, const void * src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s,int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *string, int searchedChar);
char	*ft_strrchr(const char *string, int searchedChar);
int 	ft_strncmp( const char * first, const char * second, size_t length );
size_t	ft_strlcpy(char *  dest , const char *  src , size_t  size );
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strnstr(const char *dest, const char *src, size_t len);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(const char *source);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);


t_list *ft_lstnew(void *content);



#endif
