/*
** my_serv.c for my_serv in /home/desomb_v/rendu/test/minitalk
** 
** Made by Vincent Desombre
** Login   <desomb_v@epitech.net>
** 
** Started on  Fri Mar 20 13:46:16 2015 Vincent Desombre
** Last update Sun Mar 22 21:26:14 2015 Vincent Desombre
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include "../../include/my.h"

void	my_signal_send(int pid, char c)
{
  int	i;

  i = 0;
  while (i < 8)
    {
      usleep(1000);
      if ((c >> 7) == 0)
	{
	  if (kill(pid, SIGUSR1) == -1)
	    {
	      my_printf("Kill error\n");
	      exit(1);
	    }
	}
      else
	{
	  if (kill(pid, SIGUSR2) == -1)
	    {
	      my_printf("Kill error\n");
	      exit(1);
	    }
	}
      c <<= 1;
      i++;
    }
}

int	main(int ac, char **av)
{
  pid_t pid;
  int	i;

  i = 0;
  if (ac != 3)
    {
      my_printf("Wrong argument value\n");
      return (0);
    }
  else
    {
      pid = my_getnbr(av[1]);
      while (av[2][i])
	{
	  my_signal_send(pid, av[2][i]);
	  i++;
	}
    }
  return (0);
}
