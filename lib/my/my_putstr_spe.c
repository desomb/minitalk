/*
** my_putstr_spe.c for my_putstr_spe in /home/desomb_v/rendu/Projet/PSU_2014_my_printf
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Fri Nov 14 17:14:03 2014 Vincent Desombre
** Last update Fri Nov 14 19:58:26 2014 Vincent Desombre
*/

#include "include/my.h"

int	my_putstr_spe(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127)
        {
          my_putchar('\\');
          if (str[i] < 8)
            my_putstr("00");
          if (str[i] >= 8 && str[i] <= 100)
            my_putchar('0');
          my_putnbr_base(str[i], "01234567");
          i++;
        }
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
