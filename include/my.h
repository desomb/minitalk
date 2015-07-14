/*
** my.h for my in /home/desomb_v/rendu/j09/Piscine_C_J09/include
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Thu Oct  9 15:33:10 2014 Vincent Desombre
** Last update Sat Mar  7 21:41:19 2015 Vincent Desombre
*/

#ifndef MY_H_
# define MY_H_

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int     my_str_isnum(char *str);
int     my_str_islower(char *str);
int     my_str_isupper(char *str);
int     my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmen(char *str, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strlcat(char *dest, char *src, int size);
int	my_epur_str(char *str);
int	my_getnbr_base(char *str, char *base);
void	my_putnbr_base(unsigned int nbr, char *base);
int	my_show_wordtab(char **tab);
char	*my_strdup(char *src);
char	**my_str_to_wordtab(char *str);
int	my_str_upper(char *str);
int	my_put_unsnbr(unsigned int);
int	my_putstr_spe(char *str);
void	my_putnbr_basespe(void *adr, char *base);
int    minishell(char **env);
void     my_env(char **env, char *buff);
int     env_option(char *buff, char **env);
char    *my_path(char **env);
char    *my_func(char *path, char **tab);
char    **my_str_to_wordtab(char *str);
int     countchar(char *str, int i);
int     countword(char *str);
int     my_printf(char *str, ...);
char	**my_unsetenv(char **env, char *buff);
void	my_envu(char **env, char *buff);
void	my_setenv(char **env, char *buff);

#endif
