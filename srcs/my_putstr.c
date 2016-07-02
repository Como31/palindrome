/*
** my_putstr.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Wed Jun 15 17:55:17 2016 courneil lucasc
** Last update Wed Jun 15 17:55:18 2016 courneil lucasc
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
