/*
** my_putnbr_basespe.c for my_putnbr_basespe in /home/desomb_v/rendu/Projet/PSU_2014_my_printf
**
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
**
** Started on  Fri Nov 14 17:47:43 2014 Vincent Desombre
** Last update Sat Jan  3 11:15:28 2015 Vincent Desombre
*/

#include "include/my.h"

void	my_putnbr_basespe(void *adr, char *base)
{
  unsigned long res;
  unsigned long	div;
  unsigned long	nb;
  unsigned int	size;

  my_putstr("0x");
  nb = (unsigned long) adr;
  size = my_strlen(base);
  div = 1;
  while ((nb / div) >= size)
    div = div * size;
  while (div > 0)
    {
      res = (nb / div) % size;
      my_putchar(base[res]);
      div = div / size;
    }
}
