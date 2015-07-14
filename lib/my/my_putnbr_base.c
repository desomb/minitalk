/*
** my_putnbr_base.c for my_putnbr_base in /home/desomb_v/rendu/Projet/PSU_2014_my_printf
**
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
**
** Started on  Fri Nov 7 11:24:26 2014 Vincent Desombre
** Last update Sun Nov 16 13:35:39 2014 Vincent Desombre
*/

#include "include/my.h"

void    my_putnbr_base(unsigned int nb, char *base)
{

  unsigned int   res;
  unsigned int   div;
  unsigned int   size;

  size = my_strlen(base);
  div = 1;
  while ((nb / div) >= size)
    div = div * size;
  while (div > 0)
    {
      res = (nb / div) % size;
      my_putchar(base[res]);
      div = div /size;
    }
}
