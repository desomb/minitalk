/*
** main.c for main in /home/desomb_v/rendu/test/minitalk
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Wed Feb 25 17:06:24 2015 Vincent Desombre
** Last update Sun Mar 22 21:26:06 2015 Vincent Desombre
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include "../../include/my.h"

char	c;

void	fonction_sig(int sig)
{
  static int i;

  c <<= 1;
  if (sig == SIGUSR1)
    {
      c += 0;
      i++;
    }
  else if (sig == SIGUSR2)
    {
      c += 1;
      i++;
    }
  if (i > 7)
    {
      my_putchar(c);
      i = 0;
      c = 0;
    }
}

int	main(int ac, char **av)
{
  av[0][0] = av[0][0];
  if (ac != 1)
    {
      my_printf("no argument needed\n");
      return (0);
    }
  usleep(1000);
  if (signal(SIGUSR1, &fonction_sig) == SIG_ERR)
    {
      my_printf("signal error\n");
      exit(0);
    }
  if (signal(SIGUSR2, &fonction_sig) == SIG_ERR)
    {
      my_printf("signal error\n");
      exit(0);
    }
  my_printf("PID : %i\n", getpid());
  while (42);
  return (0);
}
