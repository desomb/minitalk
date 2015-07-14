/*
** my_put_nbr.c for my_put_str in /home/desomb_v/rendu/Piscine_C_J07/ex1
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Tue Oct  7 09:59:05 2014 Vincent Desombre
** Last update Fri Nov 14 20:02:42 2014 Vincent Desombre
*/

#include "include/my.h"

int	my_power(int nb)
{
  int	i;

  i = 1;
  while (nb / 10 != 0)
    {
      nb = nb / 10;
      i = i * 10;
    }
  return (i);
}

int	my_put_nbr(int nb)
{

  int	power;

  if (nb <  0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  power = my_power(nb);
  while (power >= 1)
    {
      my_putchar (nb / power % 10 + 48);
      power = power / 10;
    }
  return (0);
}
