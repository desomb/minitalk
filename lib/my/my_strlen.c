/*
** my_strlen.c for my_strlen in /home/desomb_v/rendu/Piscine_C_J07/ex1
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Tue Oct  7 09:49:35 2014 Vincent Desombre
** Last update Sat Oct 25 18:25:18 2014 Vincent Desombre
*/

int	my_strlen(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      x = x + 1;
    }
  return (x);
}
