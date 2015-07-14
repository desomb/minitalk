/*
** my_putchar.c for my_putchar in /home/desomb_v/rendu/Piscine_C_J07/ex1
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Tue Oct 28 14:18:53 2014 Vincent Desombre
** Last update Fri Nov 14 20:09:40 2014 Vincent Desombre
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
