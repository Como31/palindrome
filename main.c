/*
** main.c for   in /home/courne_l/rendu/synthese/palindrome
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Wed Jun 15 17:50:23 2016 courneil lucasc
** Last update Fri Jun 17 15:18:39 2016 courneil lucasc
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	main(int ac, char **av)
{
  if (ac < 2)
    {
      my_putstr("Need more arguments, type ./palindrome -h.\n");
      exit(84);
    }
  else
    check_flag(av);
  return (0);
}
