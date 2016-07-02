/*
** check_flag.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Thu Jun 16 10:10:08 2016 courneil lucasc
** Last update Sat Jun 18 23:41:07 2016 courneil lucasc
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "my.h"

int	check_pflag(char **av)
{
  int	i = -1;

  i = check_iflag(av);
  if (av[1] && strcmp(av[1], "-p") == 0)
    {
      if (av[2] && isdigitstr(av[2]) != 0)
	{
	  if (check_iflag(av) != -1)
	    {
	      if (check_iflag(av) == 1)
		printf("IMAX ON BITCH = %d\n", atoi(av[6]));
	      if (check_iflag(av) == 0)
		printf("IMINUS YEAH = %d\n", atoi(av[6]));
	    }
	  if (check_iflag(av) == -1)
	    printf("bientot le -p\n");
	}
      else
	my_exit();
    }
  return (1);
}


int	check_nflag(char **av)
{
  int	i;
  int	base = 10;

  i = check_iflag(av);
  if (av[1] && strcmp(av[1], "-n") == 0)
    {
     if (av[2] && isdigitstr(av[2]) != 0)
	{
	  base = check_bflag(av);
	  aff_b(atoi(av[2]), base, i, av);
	}
      else
	my_exit();
    }
  return (1);
}

int	check_bflag(char **av)
{
  if (av[3] && strncmp(av[3], "-b", 2) == 0)
    {
      if (av[4] && isdigitstr(av[4]) != 0 && strcmp(av[1], "-n") == 0)
	return (atoi(av[4]));
      else
	my_exit();
    }
  else if (av[3] && strcmp(av[3], "-b") != 0)
    my_exit();
  return (10);
}

int	check_iflag(char **av)
{
  if (av[5] && strcmp(av[5], "-imin") == 0)
    {
      if (av[6] && isdigitstr(av[6]) != 0 && atoi(av[6]) < 100)
	return (0);
      else
	my_exit();
    }
  if (av[5] && strcmp(av[5], "-imax") == 0)
    {
      if (av[6] && isdigitstr(av[6]) != 0 && atoi(av[6]) < 100)
	return (1);
      else
	my_exit();
    }
  return (-1);
}

void	check_flag(char **av)
{
  int	i;

  i = 0;
  if (av[1] && strncmp(av[1], "-h", 2) == 0)
    puthelp();
  else if ((av[1] && strcmp(av[1], "-n") == 0) || (av[1] && strcmp(av[1], "-p") == 0))
    {
      check_nflag(av);
      check_pflag(av);
    }
  else
    my_exit();
}
