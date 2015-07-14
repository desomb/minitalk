/*
** my_put_unsnbr.c for my_put_unsnbr in /home/desomb_v/rendu/Projet/PSU_2014_my_printf
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Fri Nov 14 15:55:45 2014 Vincent Desombre
** Last update Fri Nov 14 19:57:40 2014 Vincent Desombre
*/

#include "include/my.h"

int     my_put_unsnbr(unsigned int nb)
{
  unsigned int div;

  div = 1;
  while (nb / div > 9)
    div = div * 10;
  while (div != 0)
    {
      my_putchar(48 + (nb / div) % 10);
      nb = nb % div;
      div = div /10;
    }
  return (0);
}
