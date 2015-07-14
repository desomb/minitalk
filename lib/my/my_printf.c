/*
** my_printf.c for my_printf in /home/desomb_v/rendu/Projet/PSU_2014_my_printf
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Fri Nov 14 13:19:08 2014 Vincent Desombre
** Last update Wed Nov 19 11:51:41 2014 Vincent Desombre
*/

#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

int     my_strlenspe(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    i++;
  my_put_nbr(i);
  return (0);
}

int     condition(va_list ap, char *str, int i)
{
  if (str[i] == 'd' || str[i] == 'i')
    my_put_nbr(va_arg(ap, int));
  else if (str[i] == 's')
    my_putstr(va_arg(ap, char*));
  else if (str[i] == 'S')
    my_putstr_spe(va_arg(ap, char*));
  else if (str[i] == 'c')
    my_putchar(va_arg(ap, int));
  else if (str[i] == 'u')
    my_put_unsnbr(va_arg(ap, unsigned int));
  else if (str[i] == 'o')
    my_putnbr_base(va_arg(ap, unsigned int), "01234567");
  else if (str[i] == 'x')
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
  else if (str[i] == '%')
    my_putchar('%');
  else if (str[i] == 'b')
    my_putnbr_base(va_arg(ap, unsigned int), "01");
  else if (str[i] == 'p')
    my_putnbr_basespe(va_arg(ap, void *), "0123456789abcdef");
  else if (str[i] == 'X')
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
  else if (str[i] == 'n')
    my_strlenspe(va_arg(ap, char*));
  return (0);
}

int	my_printf(char *str, ...)
{
  va_list	ap;
  int	i;

  i = 0;
  va_start(ap, str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  i++;
	  condition(ap, str, i);
	  i++;
	}
      else
        {
          my_putchar(str[i]);
          i++;
        }
    }
  va_end(ap);
  return (0);
}
