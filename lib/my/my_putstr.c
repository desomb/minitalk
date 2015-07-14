/*
** my_putstr.c for my_putstr in /home/desomb_v/rendu/Piscine_C_J07/ex1
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Tue Oct  7 09:54:41 2014 Vincent Desombre
** Last update Fri Nov 14 20:01:19 2014 Vincent Desombre
*/

#include "include/my.h"

int	my_putstr(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      my_putchar(str[x]);
      x = x + 1;
    }
  return (0);
}
