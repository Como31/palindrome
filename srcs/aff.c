/*
** aff.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Thu Jun 16 11:51:37 2016 courneil lucasc
** Last update Sat Jun 18 23:41:38 2016 courneil lucasc
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	aff_n(int nb, int base)
{
  int	iter;
  int	final;

  iter = iteration(nb);
  final = final_nb(nb);
  printf("%d leads to %d in %d iteration(s) in base %d\n", nb, final, iter, base);
  return (0);
}

int	aff_b(int nb, int base, int i, char **av)
{
  int	iter;
  int	final;

  iter = iteration(nb);
  final = final_b(nb, base);
  if (i == 1)
    {
      if (iter <= atoi(av[6]))
	printf("%d leads to %d in %d iteration(s) in base %d\n", nb, final, iter, base);
      else
	{
	  printf("no solution\n");
	  exit(0);
	}
    }
  if (i == 0)
    {
      if (iter >= atoi(av[6]))
	printf("%d leads to %d in %d iteration(s) in base %d\n", nb, final, iter, base);
      else
	{
	  printf("no solution\n");
	  exit(0);
	}
    }
  if (i == -1)
    printf("%d leads to %d in %d iteration(s) in base %d\n", nb, final, iter, base);
  exit(0);
}

int	aff_p(int nb, int base)
{
  int	iter;
  int	final;

  printf("%d leads to %d in %d iteration(s) in base %d\n", final, nb, iter, base);
}
