/*
** my_strcat.c for my_strcat in /home/desomb_v/rendu/Piscine_C_J07/ex1
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Wed Oct  8 11:25:22 2014 Vincent Desombre
** Last update Sat Nov 22 22:53:18 2014 Vincent Desombre
*/

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   n;

  i = 0;
  n = 0;
  while (dest[i] != '\0')
    i = i + 1;
  while (src[n] != '\0')
    {
      dest[i] = src[n];
      i = i + 1;
      n = n + 1;
    }
  dest[i] = '\0';
  return (dest);
}
