/*
** my_getnbr.c for get_nbr in /home/desomb_v/colle
** 
** Made by Desombre Vincent
** Login   <desomb_v@epitech.net>
** 
** Started on  Sun Oct 12 09:00:14 2014 Vincent Desombre
** Last update Tue Nov 11 00:13:05 2014 Vincent Desombre
*/

int	pos(char *str)
{
  int	s;
  int	p;

  s = 1;
  p = 0;
  while (str[p] == '+' || str[p] == '-')
    {
      if (str[p] == '-')
        {
          s = s * -1;
        }
      p = p + 1;
    }
  return (s * p);
}

int	my_getnbr(char *str)
{
  int	nbr;
  int	signe;
  int	first_nbr;

  nbr = 0;
  signe = 1;
  first_nbr = pos(str);
  if (first_nbr < 0)
    {
      first_nbr = first_nbr * -1;
      signe = -1;
    }
  str = str + first_nbr;
  while (*str >= '0' && *str <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr + (*str - '0');
      str = str + 1;
    }
  return (nbr * signe);
}
