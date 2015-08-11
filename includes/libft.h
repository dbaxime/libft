
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
/*            ecriture             */
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);

/*               traitement de chaines*/
size_t	ft_strlen(const char *s);

/*               traitement caracteres*/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

#endif
